#include <iostream>
#include <vector>
using namespace std;

int next_smallest(vector<int> lst) {
    int res = INT_MAX;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > res)
            return res;
        for (int j = i+1; j < lst.size(); j++)
            if (lst[j] < lst[i])
                res = lst[j];
    }
    return res;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}