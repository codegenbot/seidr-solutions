```
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0, end = text.length();
    
    while (start < end) {
        int pos = text.find(target, start);
        
        if (pos == string::npos)
            break;
        
        result.push_back(pos);
        start = pos + 1;
    }
    
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for (auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}