```
bool issame(const vector<string>& str1, const vector<string>& str2) {
    if (str1.size() != str2.size())
        return false;
    for (int i = 0; i < str1.size(); i++)
        if (str1[i] != str2[i])
            return false;
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    map<int, string> numStr = { {1,"One"}, {2,"Two"}, {3,"Three"}, {4,"Four"}, {5,"Five"}, {6,"Six"}, {7,"Seven"}, {8,"Eight"}, {9,"Nine"} };
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            string str = numStr[i];
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}