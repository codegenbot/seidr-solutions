#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    
    while (index <= text.length() - target.length()) {
        index = text.find(target, index);
        
        if (index == string::npos) break;
        
        result.push_back(index);
        index += target.length(); // to avoid duplicate indices
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> res = indicesOfSubstring(text, text.substr(0, n));
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}