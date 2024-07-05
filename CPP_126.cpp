#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool is_sorted(vector<int> lst) {
    if (lst.empty()) return true;
    for (size_t i = 1; i < lst.size(); ++i) {
        if (lst[i] < lst[i - 1]) return false;
        if (i > 1 && lst[i] == lst[i - 1] && lst[i] == lst[i - 2]) return false;
    }
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    assert(is_sorted({1, 2, 2, 4}) == true);
    assert(is_sorted({1, 2, 3, 2}) == false);
    assert(is_sorted({1, 1, 1}) == false);
    cout << "All tests passed!" << endl;
    return 0;
}