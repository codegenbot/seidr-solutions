double double_the_difference(double a, double b) {
    return 2 * (a - b);
}

int main() {
    vector<float> lst = {2.5, 3.0, 4.2, 5.0, 6.2};
    long long odd_sum = double_the_difference(lst);
    return 0;
}

long long double_the_difference(const vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum;
}