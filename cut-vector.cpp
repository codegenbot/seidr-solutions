#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    
    vector<int> left;
    vector<int> right;
    int best_cut = -1;
    int min_diff = INT_MAX;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += v[i];
        if (sum <= v[best_cut + 1]) {
            left.push_back(v[i]);
        } else {
            right.push_back(v[i]);
            best_cut = i;
            min_diff = INT_MAX;
            sum = 0;
            left.clear();
            left.push_back(v[i]);
        }
    }

    return {{left}, {right}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (auto& vec : res) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}