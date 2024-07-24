#include <vector>
#include <algorithm>

float median(std::vector<float> l) {
    std::sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0) {
        return (l[n/2 - 1] + l[n/2]) / 2.0;
    } else {
        return l[n/2];
    }
}