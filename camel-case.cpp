#include <string>
using namespace std;

string kebabToCamel(const string &s) {
    string res;
    bool capitalize = true;
    
    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            res += toupper(c);
            capitalize = false;
        } else {
            res += tolower(c);
        }
    }
    
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << kebabToCamel(s) << endl;
    }
    return 0;
}