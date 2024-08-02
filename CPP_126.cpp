#include <algorithm>
#include <vector>
#include <cassert>
#include <iostream>
using namespace std;

bool is_sorted(const vector<int>& lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1] || count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    assert(is_sorted({-5, -2, 0, 5, 7}) == true);
    assert(is_sorted({4, 3, 2, 1}) == false);
    assert(is_sorted({1, 2, 2, 3}) == false);
    
    return 0;
}