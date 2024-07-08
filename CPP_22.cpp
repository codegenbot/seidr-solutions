bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            int val = get<int>(value);
            if (val) { 
                result.push_back(val);
            }
        }
    }
    return result;
}