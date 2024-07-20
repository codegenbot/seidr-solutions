int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0};
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == double_the_difference(lst));
    std::cout << odd_sum << std::endl;
    return 0;
}