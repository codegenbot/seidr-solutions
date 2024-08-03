std::vector<int> remove_duplicates(const std::vector<int>& vec) {
    std::vector<int> result = vec;
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    std::vector<int> input = {1, 2, 3, 2, 4, 3, 5};
    std::vector<int> processed_input = remove_duplicates(input);
    assert(issame(processed_input, std::vector<int>{1, 4, 5}));
    
    return 0;
}