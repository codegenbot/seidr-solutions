#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Using -1 to represent None

    sort(lst.begin(), lst.end());
    int smallest = lst[0];
    
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] != smallest) {
            return lst[i];
        }
    }
    
    return -1; // No second smallest element
}

int main() {
    cout << next_smallest({-35, 34, 12, -45}) << endl; // Should output -35
    return 0;
}