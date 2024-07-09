```cpp
vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            bool isSame = true;
            for (int i = 0; i < result.size(); i++) {
                if (!areEqual(vector<int>({result[i]}), vector<int>(boost::any_cast<int>(value)))) {
                    isSame = false;
                    break;
                }
            }
            if (isSame) {
                result.push_back(boost::any_cast<int>(value));
            }
        }
    }
    return result;
}

bool areEqual(vector<int> a, vector<int> b) {
    return a == b;
}