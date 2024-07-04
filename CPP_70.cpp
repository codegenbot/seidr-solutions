#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    sort(lst.begin(), lst.end());
    bool pick_min = true;
    while (!lst.empty()) {
        if (pick_min) {
            result.push_back(lst.front());
            lst.erase(lst.begin());
        } else {
            result.push_back(lst.back());
            lst.pop_back();
        }
        pick_min = !pick_min;
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    assert(issame(strange_sort_list({3, 1, 2}), {1, 3, 2}));
    assert(issame(strange_sort_list({5, 3, 2, 8, 1, 4}), {1, 8, 2, 5, 3, 4}));
    
    cout << "All tests passed!" << endl;
    return 0;
}