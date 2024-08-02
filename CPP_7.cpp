```cpp
bool issame(vector<string> a, vector<string> b) {
    bool same = true;
    for (const auto& s : a) {
        if (std::find(b.begin(), b.end(), s) == b.end()) {
            same = false;
            break;
        }
    }
    return same;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}