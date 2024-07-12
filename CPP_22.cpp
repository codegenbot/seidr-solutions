bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        try {
            if (boost::any_cast<int>(value).good()) {
                result.push_back(boost::any_cast<int>(value));
            }
        } catch (...) {
            // handle exception
        }
    }
    return result;
}