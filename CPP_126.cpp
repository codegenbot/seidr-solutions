#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isSorted(const vector<int>& lst) {
    return is_sorted(lst.begin(), lst.end());
}

int main() {
    assert(isSorted({1, 2, 3, 4}) == true);

    return 0;
}