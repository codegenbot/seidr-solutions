bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (boost::any_cast<int>(value)) {
            int val = boost::any_cast<int>(value);
            bool isInt = true;
            for (int num : values) {
                if (!issame({val}, {num})) {
                    isInt = false;
                    break;
                }
            }
            if (isInt) {
                result.push_back(val);
            }
        }
    }
    return result;
}