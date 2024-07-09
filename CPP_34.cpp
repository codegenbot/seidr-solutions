#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> removeDuplicates(vector<int>& l) {
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

int main() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> expected_output = {0, 2, 3, 5, 9, 123};

    vector<int> unique_elements = removeDuplicates(input);

    assert(issame(unique_elements, expected_output));

    return 0;
}