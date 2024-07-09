vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool areEqual(vector<int> a, vector<int> b) {
    return a == b;
}

assert(areEqual(filter_integers({3, any('c'), 3, 3, any('a'), any('b')}), {3, 3, 3}) );