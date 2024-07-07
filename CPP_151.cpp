int main() {
    vector<float> lst = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    float odd_sum = 0;
    assert(double_the_difference(lst) == (float)sqrt(pow(odd_sum, 2) * 2));
}
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}