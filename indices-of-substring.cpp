#include <vector>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    int lastFound = -1;
    
    for (int i = 0; i <= text.size() - target.size(); i++) {
        if (text.substr(i, target.size()) == target) {
            result.push_back(i);
            lastFound = i;
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> res = indicesOfSubstring(s, s.substr(0,1));
    for (int i : res) {
        cout << i << endl;
    }
    return 0;
}