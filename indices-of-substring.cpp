#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size(), m = target.size();
    
    int i = 0;
    while (i <= n - m) {
        if (text.find(target, i) != string::npos)
            result.push_back(text.find(target, i));
        i = text.find(target, i); // updated line
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