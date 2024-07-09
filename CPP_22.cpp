bool issame(vector<int> a, vector<int> b) {
    return a == b; 
}

vector<int> filter_integers(vector<vector<int>> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.size() > 0 && boost::any_cast<int>(boost::any(value[0]), 0)) {
            for (int val : value) {
                result.push_back(val);
            }
        }
    }
    return result;
}