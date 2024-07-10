#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> l_copy = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sort(l_copy.begin() + i, l_copy.begin() + i + 3);
        }
    }
    return l_copy;
}

int main() {
    vector<int> input = {9, 5, 7, 2, 8, 4, 6, 1, 3};
    vector<int> expected = {7, 5, 9, 2, 4, 8, 3, 1, 6};

    assert(sort_third(input) == expected);

    return 0;
}