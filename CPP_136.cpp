#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int largest_negative = 0;
    int smallest_positive = 0;
    
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < 0 && lst[i] < largest_negative) {
            largest_negative = lst[i];
        } else if (lst[i] > 0 && (lst[i] < smallest_positive || smallest_positive == 0)) {
            smallest_positive = lst[i];
        }
    }
    
    vector<int> result = {largest_negative, smallest_positive};
    return result;
}

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

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    
    return 0;
}