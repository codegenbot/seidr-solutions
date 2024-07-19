vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) { 
            result.push_back(*std::any_cast<int>(value));
        }
    }
    return result;