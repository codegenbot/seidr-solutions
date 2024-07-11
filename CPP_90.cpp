#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int next_smallest(vector<int> lst) {
    int res = -1;
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] > lst[i + 1]) {
            res = lst[i];
            break;
        }
    }
    return res;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}