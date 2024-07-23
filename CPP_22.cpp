vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            try {
                result.push_back(any_cast<int>(value));
            } catch (...) {
                // Ignore the exception and move on to the next value
            }
        }
    }
    return result;
}