vector<int> filter_integers(list_any values){
    vector<int> result;
    for (auto value : values) {
        if (holds_alternative<int>(value)) {
            result.push_back(get<int>(value));
        }
    }
    return result;
}