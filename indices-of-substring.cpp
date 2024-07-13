#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0;
    
    while (start < text.length()) {
        size_t found = text.find(target, start);
        
        if (found != string::npos) {
            result.push_back(found);
            start = found + 1;
        } else {
            break;
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> res = indicesOfSubstring(s, s.substr(0, n));
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}