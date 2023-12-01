#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_third(vector<int> l);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> sort_third(vector<int> l) {
    vector<int> result = l;
    vector<int> sorted_third;

    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            sorted_third.push_back(l[i]);
        }
    }

    sort(sorted_third.begin(), sorted_third.end());

    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            result[i] = sorted_third[j];
            j++;
        }
    }

    return result;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    
    return 0;
}