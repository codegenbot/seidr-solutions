int main() {
    std::vector<float> lst = {1.5, 3.0, 4.5};
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == double_the_difference(lst));
    return 0;
}