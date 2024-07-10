```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(!issame(a[i], b[i])) {
            return false;
        }
    }
    return true;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    vector<string> v1 = all_prefixes(s1);
    vector<string> v2 = all_prefixes(s2);

    if(issame(v1, v2)) {
        cout << "The two strings are the same." << endl;
    } else {
        cout << "The two strings are not the same." << endl;
    }

    return 0;
}