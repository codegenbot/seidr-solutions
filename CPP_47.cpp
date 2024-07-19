#include <initializer_list>

int calculateMedian(std::initializer_list<float> l) {
    std::vector<float> v(l);
    std::sort(v.begin(), v.end());
    int n = v.size();
    if (n % 2 == 0)
        return (v[n/2 - 1] + v[n/2]) / 2;
    else
        return v[n/2];