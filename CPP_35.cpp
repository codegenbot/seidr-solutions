#include <algorithm>
#include <cmath>

int findMax(int n) {
    if (n <= 0) {
        cout << "Error: Input is not a positive integer." << endl;
        return -1; 
    }
    
    vector<int> l(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    
    if (l.empty()) {
        cout << "Error: The list is empty." << endl;
        return -1; 
    }
    
    return *max_element(l.begin(), l.end());
}