bool assert_equal(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert_equal(even_odd_count(0), std::vector<int>{1, 0});
    assert_equal(even_odd_count(123456), std::vector<int>{3, 3});
    assert_equal(even_odd_count(-87654), std::vector<int>{2, 3});
    return 0;
}