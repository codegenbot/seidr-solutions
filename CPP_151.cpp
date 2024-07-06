long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2);
        }
    }
    return sum;

}

int main() {
    vector<float> lst = {1.5f, 3.8f, 4.0f, -1.2f, 2.7f};
    int odd_sum = 0; 
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}