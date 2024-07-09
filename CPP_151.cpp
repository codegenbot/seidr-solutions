vector<float> lst = {1.2f, 3.4f, -5.6f};
int main() {
    vector<float> lst = {1.2f, 3.4f, -5.6f};
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == 22); // Assuming the sum of squares of positive integers is 22
    return 0;
}
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) { // Check if number is positive and integer
            sum += pow(num, 2);
        }
    }
    return sum;
}