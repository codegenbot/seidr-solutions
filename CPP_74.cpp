```
#include <vector>
#include <string>
#include <iostream>
using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::strcmp(a[i].c_str(), b[i].c_str()) != 0)
            return false;
    }
    return true;
}

int main() {
    vector<string> v1, v2;

    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, str);
        v1.push_back(str);
    }

    for (int i = 0; i < n; i++) {
        string str;
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, str);
        v2.push_back(str);
    }

    if (issame(v1, v2))
        cout << "Both vectors have same strings.";
    else
        cout << "Vectors do not have the same strings.";

    return 0;
}