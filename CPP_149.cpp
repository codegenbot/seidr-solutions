```
bool issame(const string& a, const string& b) {
    return a == b;
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
    vector<string> lst = {"abc", "bca", "bcd", "cba", "xyz"};
    vector<string> res = sorted_list_sum(lst);
    for (const auto& str : res) {
        if (issame(str, "xyz")) {
            cout << "Found 'xyz'\n";
            break;
        }
    }

    return 0;
}