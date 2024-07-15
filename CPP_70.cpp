#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> strange_sort_list(vector<int> input);

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));

    return 0;
}