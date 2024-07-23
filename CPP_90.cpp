#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSmallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1;
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -12;

}

int main() {
    cout << findSmallest({-35, 34, 12, -45}) << endl;
    return 0;
}