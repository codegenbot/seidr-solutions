#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0, end = text.size() - target.size();
    
    while (end >= 0) {
        start = end - (target.size() - 1);
        end = text.find(target, start + 1);
        
        if (end != string::npos)
            result.push_back(start);
    }
    
    return result;
}

int main() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> res = indicesOfSubstring(s, n > 0 ? s.substr(0, n) : "");
    for (int i: res)
        cout << i << endl;
    return 0;
}