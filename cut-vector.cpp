#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

vector<pair<vector<int>, vector<int>>> cutVector(vector<int> v) {
    int n = v.size();
    
    pair<vector<int>, vector<int>> result;
    int min_diff = INT_MAX;
    int best_cut = -1;

    for (int i = 0; i < n; i++) {
        int sum_left = 0, sum_right = 0;
        for (int j = 0; j <= i; j++)
            sum_left += v[j];
        for (int j = i + 1; j < n; j++)
            sum_right += v[j];

        if(sum_left == sum_right) {
            result.first = vector<int>(v.begin(), v.begin() + i+1);
            result.second = vector<int>(v.begin() + i, v.end());
            break;
        }
        
        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            best_cut = i;
        }
    }

    result.first = vector<int>(v.begin(), v.begin() + best_cut+1);
    result.second = vector<int>(v.begin() + best_cut, v.end());
    
    return {result};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<pair<vector<int>, vector<int>>> res = cutVector(v);
    for (auto& pair : res) {
        cout << "Left: ";
        for (int num : pair.first) {
            cout << num << " ";
        }
        cout << endl;
        cout << "Right: ";
        for (int num : pair.second) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}