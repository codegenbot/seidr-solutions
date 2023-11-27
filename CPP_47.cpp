#include <vector>

float median(vector<float> l){
    sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0) {
        return (l[n/2 - 1] + l[n/2]) / 2.0;
    } else {
        return l[n/2];
    }
}

vector<float> values = {8, 1, 3, 9, 9, 2, 7};
assert(abs(median(values) - 7) < 1e-4);