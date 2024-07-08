```cpp
bool issame(vector<any> values) {
    vector<int> first;
    for (const auto& value : values) {
        boost::any_cast<int>(value);
        if (!boost::any_cast<bool>(value)) continue;
        first.push_back(boost::any_cast<int>(value));
    }
    vector<int> second;
    for (const auto& value : values) {
        boost::any_cast<int>(value);
        if (!boost::any_cast<bool>(value)) continue;
        second.push_back(boost::any_cast<int>(value));
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