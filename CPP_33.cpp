#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
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

bool sort_third(const vector<int>& l) {
    vector<int> sorted_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(i);
        }
    }
    sort(sorted_indices.begin(), sorted_indices.end(), [&](int a, int b) {
        return l[a] < l[b];
    });

    vector<int> new_l = l;
    for (int i = 0; i < sorted_indices.size(); ++i) {
        new_l[sorted_indices[i]] = l[i];
    }

    return issame(new_l, l);
}

int main() {
    // Test the sort_third function
    vector<int> l = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    if (sort_third(l)) {
        std::cout << "Sorting successful!" << std::endl;
    } else {
        std::cout << "Sorting failed!" << std::endl;
    }

    return 0;
}