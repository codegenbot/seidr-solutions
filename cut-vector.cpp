#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int diff = INT_MAX;
    int idx = -1;
    for (int i = 0; i < n-1; ++i) {
        int left_sum = 0;
        int right_sum = 0;
        for (int j = 0; j <= i; ++j) {
            left_sum += vec[j];
        }
        for (int j = i+1; j < n; ++j) {
            right_sum += vec[j];
        }
        if (abs(left_sum - right_sum) < diff) {
            diff = abs(left_sum - right_sum);
            idx = i;
        }
    }
    
    for (int i = 0; i <= idx; ++i) {
        cout << vec[i] << endl;
    }
    cout << endl;
    for (int i = idx+1; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}