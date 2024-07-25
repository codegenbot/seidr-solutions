long long double_the_difference(const std::vector<int>& lst) {
    long long sum = 0;
    for (auto num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)num * num;
        }
    }
    return 2 * sum;
}

int main() {
    std::vector<int> lst = {1, 2, 3, 4, 5};
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == 35); // Define your_expected_output based on the problem description
    return 0;
}