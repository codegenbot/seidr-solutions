#include <vector>
#include <string>

using namespace std;

bool isSameVectors(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

vector<string> reverse_delete(const string& s, const string& t) {
    vector<string> result;
    for(int i = 0; i < s.size(); i++) {
        bool found = false;
        for(int j = 0; j < t.size(); j++) {
            if(s[i] == t[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            result.push_back(s.substr(i));
            break;
        }
    }
    return result;
}

int main() {
    string s, t;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> t;
    if(isSameVectors({s}, {t})) {
        vector<string> res = reverse_delete(s, t);
        for(auto str : res) {
            cout << str << " ";
        }
        cout << endl;
    } else {
        cout << "Strings are not the same." << endl;
    }
    return 0;
}