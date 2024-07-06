```
vector<bool> issame(vector<string>, int);
bool issameHelper(string, string);

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (issameHelper(str, "hello")) {
            result.push_back(str);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

vector<bool> issame(vector<string> lst, int index) {
    vector<bool> result(lst.size(), false);
    for (int i = 0; i < lst.size(); ++i) {
        if (issameHelper(lst[i], "hello")) {
            result[i] = true;
        }
    }
    return result;
}

bool issameHelper(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    } else {
        for (int i = 0; i < a.length(); ++i) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
}