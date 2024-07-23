#include <iostream>
#include <vector>
using namespace std;

bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1)
        return true;

    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1])
            continue;
        else
            break;
    }
    return next(lst.begin(), 1, 0) != unique(lst.begin(), lst.end());
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    cout << "Is the given vector sorted? ";
    if (is_sorted({1, 2, 3, 4})) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}