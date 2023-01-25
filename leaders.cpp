#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<string> strs(n);
    for (int i = 0; i < n; i++) cin >> strs[i];
    vector<string> res;
    for (int i = 0; i < m; i++) {
        string s = "";
        for (int j = 0; j < n; j++) {
            if (strs[j].size() > i) {
                s += strs[j][i];
            }
        }
        res.push_back(s);
    }
    for (int i = 0; i < m; i++) cout << res[i] << endl;
    return 0;
}
