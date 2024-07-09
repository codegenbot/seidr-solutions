bool issame(vector<int> a, vector<int> b) {
    return a == b; 
}

vector<int> filter_integers(vector<vector<int>> values) {
    vector<int> result;
    for (auto& value : values) {
        if (std::find(value.begin(), value.end(), 0) == value.end()) { // check for 0
            for (int v : value) {
                result.push_back(v);
            }
        }
    }
    return result;
}