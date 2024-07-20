#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result(2);
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            result[0] = {v};
            result[1].clear();
            break;
        }
        
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += v[j];
        }
        
        if (leftSum == rightSum) {
            result[0] = vector<int>(v.begin(), v.begin() + i);
            result[1] = vector<int>(v.begin() + i, v.end());
            break;
        }
    }
    
    return result;
}

int main() {
    int num;
    vector<int> v;

    cin >> num;
    while (num--) {
        cin >> num;
        v.push_back(num);
    }

    auto res = cutVector(v);

    for (auto& vec : res) {
        for (int x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}