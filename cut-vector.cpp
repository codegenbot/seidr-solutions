#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n+1);
    for (int i = 0; i <= n; ++i)
        cin >> vec[i];
    
    pair<vector<int>, vector<int>> res = cutVector(vec);
    
    cout << "[";
    for (int num : res.first) {
        cout << num;
        if (&num != &res.first.back())
            cout << " ";
    }
    cout << "] [";
    
    for (int num : res.second) {
        cout << num;
        if (&num != &res.second.back())
            cout << " ";
    }
    
    cout << "]" << endl;
}