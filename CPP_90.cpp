#include <iostream>
#include <vector>
using namespace std;

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    int res = -1;
    for (int i = sorted.size() - 2; i >= 0; i--) {
        if (sorted[i] < sorted[sorted.size()-1]) {
            res = sorted[i];
            break;
        }
    }
    return res;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}