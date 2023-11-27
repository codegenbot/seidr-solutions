#include <vector>
#include <algorithm>
#include <cmath>

float median(vector<float> l) {
    int n = l.size();
    sort(l.begin(), l.end());

    if (n % 2 == 0) {
        return (l[n / 2 - 1] + l[n / 2]) / 2.0;
    }
    else {
        return l[n / 2];
    }
}

int main() {
    assert(abs(median({8, 1, 3, 9, 9, 2, 7}) - 7) < 1e-4);
    return 0;
}