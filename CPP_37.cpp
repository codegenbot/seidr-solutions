#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<float>& a, vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void sort_even(vector<float>& l_even) {
    sort(l_even.rbegin(), l_even.rend());
}

int main() {
    vector<float> l = {1.2, 3.4, 2.1, 4.5, 5.6};
    vector<float> sorted_l = l;
    sort(sorted_l.begin(), sorted_l.end());
    
    vector<float> sorted_result = l;
    sort_even(sorted_result);
    
    if (issame(sorted_result, sorted_l)) {
        cout << "Results match the expected sorting" << endl;
    } else {
        cout << "Results do not match the expected sorting" << endl;
    }

    assert(issame({5, 8, -12, 4, 23, 2, 3, 11, 12, -10} , {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    return 0;
}