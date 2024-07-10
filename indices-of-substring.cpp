#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int pos = 0;
    
    while (pos <= text.length() - target.length()) {
        pos = text.find(target, pos);
        
        if (pos == string::npos) break;
        
        result.push_back(pos);
        pos += 1;
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    
    vector<int> result = indicesOfSubstring(text, n > 0 ? "" : text.substr(0, n));
    
    for (int i: result) {
        cout << i << " ";
    }
    return 0;
}