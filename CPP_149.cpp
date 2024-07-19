```
bool issame(const string& a, const string& b) {
    if (a.length() == 0 && b.length() == 0)
        return true;
    else if ((a.length() != 0 && b.length() != 0) && 
             (a.length() > 0 && a[0] == b[0]))
        return issame(a.substr(1), b.substr(1));
    else
        return false;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });

    return result;
}

int main() {
    vector<string> lst = {"apple", "banana", "cat", "dog", "elephant"};
    vector<string> result = sorted_list_sum(lst);
    
    for (const auto& str : result) {
        if (!issame("", str)) {
            cout << str << endl;
        }
    }

    return 0;
}