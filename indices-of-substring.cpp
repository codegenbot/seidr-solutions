```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    
    for (int i = 0; i <= text.size() - target.size(); i++) {
        if (text.substr(i, target.size()) == target)
            result.push_back(i);
    }
    
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}