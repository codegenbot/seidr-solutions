int main() {
    std::vector<int> vec{5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(vec);
    assert(vec == std::vector<int>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10});
    return 0;
}