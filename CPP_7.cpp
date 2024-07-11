#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](const string& s) {
        return find(b.begin(), b.end(), s) != b.end();
    });
}

int main() {
    int n;
    std::cin >> n;
    
    vector<string> strings;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        strings.push_back(str);
    }
    
    string substring;
    cin >> substring;

    vector<string> result = filter_by_substring(strings, substring);

    if (issame({substring}, result)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}