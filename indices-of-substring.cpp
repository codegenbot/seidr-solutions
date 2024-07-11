#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; i++) {
        if(text.substr(i, m) == target)
            result.push_back(i);
        else if(text.substr(i, m).find(target) != string::npos) {
            int j = i;
            while(j < n && text.substr(j, m) == target) {
                result.push_back(j);
                j += m;
            }
        }
    }
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;

    vector<int> res = indicesOfSubstring(text, target);

    for(auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}