#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int max_val = *max_element(arr.begin(), arr.end());
    int min_val = *min_element(arr.begin(), arr.end());
    
    cout << "Histogram: ";
    for (int i = min_val; i <= max_val; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                count++;
            }
        }
        cout << count << " ";
    }
    
    return 0;
}