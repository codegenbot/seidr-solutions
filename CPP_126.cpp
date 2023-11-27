#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_sorted(vector<int> lst) {
    // Sort the vector in ascending order
    sort(lst.begin(), lst.end());
    
    // Check if there are more than 1 duplicate of the same number
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] == lst[i+1]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Test the function
    cout << is_sorted({5}) << endl; // true
    cout << is_sorted({1, 2, 3, 4, 5}) << endl; // true
    cout << is_sorted({1, 3, 2, 4, 5}) << endl; // false
    cout << is_sorted({1, 2, 3, 4, 5, 6}) << endl; // true
    cout << is_sorted({1, 2, 3, 4, 5, 6, 7}) << endl; // true
    cout << is_sorted({1, 3, 2, 4, 5, 6, 7}) << endl; // false
    cout << is_sorted({1, 2, 2, 3, 3, 4}) << endl; // true
    cout << is_sorted({1, 2, 2, 2, 3, 4}) << endl; // false
    
    return 0;
}