bool issame(vector<any> a, vector<any> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (const auto& value : values) {
        any_cast<int>(value);
        if(any_cast<bool>(value)) {
            if(boost::any_cast<optional<int>>(value).has_value()) {
                result.push_back(boost::any_cast<int>(value));
            }
        }
    }
    return result;
}