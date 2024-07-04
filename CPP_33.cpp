#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

// Define the sort_third function
vector<int> sort_third(vector<int> l) {
    vector<int> result = l;
    vector<int> to_sort;
    
    // Collect elements at indices divisible by 3
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            to_sort.push_back(l[i]);
        }
    }
    
    // Sort the collected elements
    sort(to_sort.begin(), to_sort.end());
    
    // Place the sorted elements back into their original positions
    int sort_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            result[i] = to_sort[sort_index++];
        }
    }
    
    return result;
}

// Define the issame function for comparison
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    // Test the function
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    cout << "Test passed!" << endl;
    return 0;
}