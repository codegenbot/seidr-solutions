long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.3f, 5.7f, -4.9f, 8.2f};
    long long odd_sum = double_the_difference({1.0f, 3.0f, 5.0f});
    assert(double_the_difference(lst) == odd_sum); 
    return 0;
}