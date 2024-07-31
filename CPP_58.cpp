#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_same(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for (int num : a) {
        if (binary_search(b.begin(), b.end(), num)) {
            return true;
        }
    }
    
    return false;
}

int main() {
    vector<int> l1 = {1, 2, 3, 4, 5};
    vector<int> l2 = {1, 3, 5, 7, 9};

    if (is_same(l1, l2)) {
        cout << "Lists have at least one common element." << endl;
    } else {
        cout << "Lists have no common elements." << endl;
    }

    return 0;
}