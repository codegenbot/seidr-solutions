#include <vector>
#include <algorithm>

double median(vector<int>& l) {
    sort(l.begin(), l.end());
    int n = l.size();
    return (n % 2 == 0) ? (l[n/2 - 1] + l[n/2]) / 2.0 : l[n/2];
}

int main() {
    vector<int> l = {8, 1, 3, 9, 9, 2, 7};
    assert(abs(median(l) - 7) < 1e-4);
    return 0;
}