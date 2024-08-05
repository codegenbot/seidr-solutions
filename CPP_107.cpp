std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(i % 2);
    }
    return result;
}