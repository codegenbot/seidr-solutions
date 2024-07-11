#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }
    
    int left_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        left_sum += arr[i];
        int right_sum = total_sum - left_sum;
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i + 1;
        }
    }
    
    for (int i = 0; i < cut_index; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;
    for (int i = cut_index; i < n; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}