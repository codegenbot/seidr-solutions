bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    std::vector<int> arr = {3, 1, 7, 4, 2, 9};
    std::vector<std::string> expected_result = {"Nine", "Seven", "Four", "Three", "Two", "One"};

    std::vector<std::string> result = by_length(arr);

    assert(issame(result, expected_result));

    return 0;
}