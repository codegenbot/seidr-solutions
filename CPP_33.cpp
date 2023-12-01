#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_third(vector<int> l);

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
    vector<int> sorted = sort_third({5, 6, 3, 4, 8, 9, 2, 1});
    vector<int> expected = {2, 6, 3, 4, 8, 9, 5, 1};

    if (issame(sorted, expected)) {
        cout << "Output is correct." << endl;
    } else {
        cout << "Output is incorrect." << endl;
    }

    return 0;
}