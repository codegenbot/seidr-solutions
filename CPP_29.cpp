#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;

int main() {
    vector<string> a;
    cout << "Enter strings (stop when empty):" << endl;
    string s;
    while (getline(cin, s)) {
        if (s.empty()) break;
        a.push_back(s);
    }

    vector<string> b = a;
    bool same = issame(a, b);

    string prefix;
    cout << "Enter prefix:" << endl;
    cin >> prefix;
    while (prefix.back() != '\n') {
        prefix.pop_back();
    }
    prefix.erase(0, 1);
    vector<string> result = filter_by_prefix(a, prefix);

    if (!same) 
        cout << "Strings are not the same." << endl;
    else 
        cout << "Strings are the same." << endl;

    for (const auto& s : result) {
        cout << s << endl;
    }

    return 0;
}