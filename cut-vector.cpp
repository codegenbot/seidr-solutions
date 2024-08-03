#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;

    for(int i = 0; i < n; i++) {
        if(i == n - 1 || vec[i] != vec[i+1]) {
            vector<int> v1 = vector<int>(vec.begin(), vec.begin() + i + 1);
            vector<int> v2 = vector<int>(vec.begin() + i, vec.end());
            result.push_back({v1});
            if(i < n - 1) result.push_back({v2});
            break;
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<vector<int>> res = cutVector(vec);
    for(auto v : res) {
        for(auto x : v) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}