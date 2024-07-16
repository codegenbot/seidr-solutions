#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> sort_even(vector<float> l) {
    vector<float> l_odd;
    vector<float> l_even;
    vector<float> l_sorted_even;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_even.push_back(l[i]);
            l_sorted_even.push_back(l[i]);
        } else {
            l_odd.push_back(l[i]);
        }
    }

    sort(l_sorted_even.begin(), l_sorted_even.end());

    vector<float> result;
    int even_index = 0;
    int odd_index = 0;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(l_even[even_index]);
            even_index++;
        } else {
            result.push_back(l_odd[odd_index]);
            odd_index++;
        }
    }

    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}),
                  {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    return 0;
}