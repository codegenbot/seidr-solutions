vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            int integer = get<int>(value);
            result.push_back(integer);
        }
    }
    return result;
}