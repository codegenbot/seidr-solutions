```cpp
vector<bool> filter_by_substring(vector<vector<string>> strings, string substring) {
    vector<bool> result;
    for (auto &a : strings) {
        bool flag = false;
        for (string s : a) {
            if (s.find(substring) != string::npos) {
                flag = true;
                break;
            }
        }
        result.push_back(flag);
    }
    return result;
}