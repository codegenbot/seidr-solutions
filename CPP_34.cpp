bool areEqual(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> unique_copy(std::vector<int>::iterator first, std::vector<int>::iterator last) {
    std::vector<int> result(std::unique_copy(first, last));
    return result;
}