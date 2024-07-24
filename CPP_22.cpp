bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (boost::any_cast<int>(value)) {
            int integer_value = boost::any_cast<int>(value);
            bool same = false;
            for (const auto& other_value : values) {
                if (boost::any_cast<int>(other_value) == integer_value) {
                    same = true;
                    break;
                }
            }
            if (!same) {
                result.push_back(integer_value);
            }
        }
    }
    return result;
}