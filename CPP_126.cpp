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
    return false;
}

int main() {
    assert (is_sorted({1, 2, 3, 4}) == true);
    return 0;
}