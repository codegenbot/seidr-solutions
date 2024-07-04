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

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    cout << "Test passed!" << endl;
    return 0;
}