```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool stdsame(std::vector<float> a, std::vector<float>b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> evenVals;
    std::vector<float> oddVals;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            evenVals.push_back(l[i]);
        } else {
            oddVals.push_back(l[i]);
        }
    }

    std::sort(evenVals.begin(), evenVals.end());

    std::vector<float> result;
    int idx = 0;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(evenVals[idx++]);
        } else {
            result.push_back(oddVals[i - idx]);
        }
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> l(n);

    for (int i = 0; i < n; i++) {
        std::cin >> l[i];
    }

    l = sort_even(l);

    for (float x : l) {
        std::cout << x << " ";
    }
    return 0;
}