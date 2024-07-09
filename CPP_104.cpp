std::vector<int> unique_digits(std::vector<int> a) {
    std::vector<int> result = a;
    std::sort(std::begin(result), std::end(result));
    result.erase(std::unique(std::begin(result), std::end(result)), std::end(result));
    return result;
}