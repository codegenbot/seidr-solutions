bool assert_equal(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(assert_equal(even_odd_count(0), std::vector<int>{1, 0}));
    assert(assert_equal(even_odd_count(123456), std::vector<int>{3, 3}));
    assert(assert_equal(even_odd_count(-87654), std::vector<int>{2, 3}));

    std::cout << "All test cases passed successfully." << std::endl;

    return 0;
}