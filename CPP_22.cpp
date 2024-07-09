std::vector<int> filter_integers(const std::list<bool>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value) {
            int num = static_cast<int>(values.begin()->get_as<int>());
            result.push_back(num);
        }
    }
    return result;
}