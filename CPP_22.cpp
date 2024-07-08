bool issame(vector<any> values) {
    vector<int> first, second;
    for (const auto& value : values) {
        if (std::any_cast<bool>(value)) {
            int val = std::any_cast<int>(value).get_int();
            if (first.empty()) first.push_back(val);
            else if (second.empty()) second.push_back(val);
            else return false;
        }
    }
    return first == second;
}

vector<int> filter_integers(vector<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value);
        if (!boost::any_cast<bool>(value)) continue;
        result.push_back(boost::any_cast<int>(value));
    }
    return result;
}