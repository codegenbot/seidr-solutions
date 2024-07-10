```cpp
using namespace std;

#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> all_prefixes(const string& s) {
    vector<string> result;
    for (int i = 0; i <= s.size(); i++) {
        result.push_back(s.substr(0, i));
    }
    return result;

}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    vector<string> prefixes = all_prefixes(str);
    
    for (string prefix : prefixes) {
        cout << prefix << endl;
    }
    
    return 0;
}