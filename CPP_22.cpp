std::vector<int> filter_integers(const std::list<bool>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (static_cast<bool>(value)) {
            int num = static_cast<int>(values.begin()[1]);
            result.push_back(num);
        }
    }
    return result;
}