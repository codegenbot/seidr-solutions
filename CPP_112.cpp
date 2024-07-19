```cpp
#include <vector>
#include <string>
#include <initializer_list>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

vector<string> reverse_delete(const string& s, const string& t) {
    vector<string> result;
    int i = 0;
    while(i < s.size()) {
        bool found = false;
        for(int j = 0; j < t.size(); j++) {
            if(s[i] == t[j]) {
                found = true;
                i++;
                break;
            }
        }
        if(!found) {
            int temp = i;
            while(i < s.size()) {
                result.push_back(s.substr(temp));
                i++;
            }
            break;
        }
    }
    return result;
}

int main() {
    vector<string> s, t;
    cout << "Enter the first string: ";
    string str;
    while(getline(cin, str))s.push_back(str);
    cout << "Enter the second string: ";
    while(getline(cin, str))t.push_back(str);
    if(issame(s,t)) {
        int i = 0;
        bool found = false;
        while(i < s[0].size()) {
            for(int j = 0; j < t[0].size(); j++) {
                if(s[0][i] == t[0][j]) {
                    found = true;
                    i++;
                    break;
                }
            }
            if(!found) {
                cout << s[0].substr(i) << " ";
                break;
            }
        }
    } else {
        cout << "Strings are not the same." << endl;
    }
    return 0;
}