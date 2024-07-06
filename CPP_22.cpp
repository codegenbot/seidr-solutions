```cpp
bool same(vector<int> a, vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}