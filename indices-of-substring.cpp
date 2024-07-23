#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0;
    
    while (start < text.length()) {
        int pos = text.find(target, start);
        
        if (pos == -1)
            break;
        
        result.push_back(pos);
        start = pos + 1;
    }
    
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for (auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}