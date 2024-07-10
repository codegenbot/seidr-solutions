```cpp
bool issame(vector<int> a,vector<int>b) {
    return (a == b);
}

vector<any> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}