int main() {
    vector<float> lst = {1.2f, -3.5f, 4.0f, 8.0f};
    long long odd_sum;
    odd_sum = double_the_difference(lst);
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}