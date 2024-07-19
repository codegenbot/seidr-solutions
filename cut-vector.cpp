#include <climits>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    long long total_sum = 0;
    for (int x : v) {
        total_sum += x;
    }
    
    int index = -1;
    long long left_sum = 0;
    for (int i = 0; i < v.size(); i++) { 
        if(left_sum + v[i] * 2 > total_sum){
            index = i;
            break;
        } 
        left_sum += v[i]; 
    }
    
    vector<vector<int>> res(2);
    res[0].assign(v.begin(), v.begin() + index+1);
    res[1].assign(v.begin() + index, v.end());
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (auto &v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}