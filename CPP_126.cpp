#include <algorithm>
#include <vector>
#include <cassert>
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
    assert(is_sorted({1, 3, 2, 4}) == false); // Additional test case
    assert(is_sorted({1, 1, 2, 3}) == false); // Additional test case
    return 0;
}