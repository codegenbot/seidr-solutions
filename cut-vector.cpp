#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for(int i = 1; i <= vec.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        for(int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        
        for(int j = i; j < vec.size(); j++) {
            right_sum += vec[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if(diff <= min_diff) {
            min_diff = diff;
            result.first = vector<int>(vec.begin(), vec.begin() + i);
            result.second = vector<int>(vec.begin() + i, vec.end());
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n+1);
    for(int i = 0; i <= n; i++) {
        cin >> vec[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(vec);
    cout << "First subvector: ";
    for(auto x : res.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Second subvector: ";
    for(auto x : res.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;