#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int next_smallest(vector<int> lst) {
    // If there are less than 2 elements in the vector, return None
    if (lst.size() < 2) {
        return None;
    }
  
    // Sort the vector in ascending order
    sort(lst.begin(), lst.end());
      
    // Find the 2nd smallest element
    int second_smallest = lst[1];
  
    return second_smallest;
}

int main() {
    // Test the function
    cout << next_smallest({1, 2, 3, 4, 5}) << endl;      // Output: 2
    cout << next_smallest({5, 1, 4, 3, 2}) << endl;      // Output: 2
    cout << next_smallest({}) << endl;                   // Output: None
    cout << next_smallest({1, 1}) << endl;               // Output: None

    return 0;
}