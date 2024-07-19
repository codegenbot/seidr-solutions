#include <algorithm>
#include <vector>
#include <assert.h>
#include <iostream>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> sorted_arr = sort_array(arr);
    
    if(issame(arr, sorted_arr)) {
        cout << "Array is already sorted." << endl;
    } else {
        cout << "Sorted array: ";
        for(int i : sorted_arr) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}