#include <vector>
#include <algorithm>
#include <cmath>

double median(std::vector<int> l) {
    if (l.empty()) {
        return 0.0;
    }
    
    std::sort(l.begin(), l.end());
    
    int n = l.size();
    if (n % 2 == 0) {
        return static_cast<double>(l[n / 2 - 1] + l[n / 2]) / 2.0;
    } else {
        return static_cast<double>(l[n / 2]);
    }
}