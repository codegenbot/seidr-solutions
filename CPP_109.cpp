#include <iostream>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0)
        return true;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[0])
            continue;
        else
            break;
    }
    
    return false;
}

int main() {
    vector<int> arr = {3, 4, 5, 1, 2};
    cout << move_one_ball(arr) << endl; // Output: true
    
    vector<int> arr2 = {3, 5, 4, 1, 2};
    cout << move_one_ball(arr2) << endl; // Output: false
    
    return 0;
}