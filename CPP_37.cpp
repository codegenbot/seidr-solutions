```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sort_even(std::vector<int> l) {
    vector<int> evenVals;
    vector<int> oddVals;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            evenVals.push_back(l[i]);
        } else {
            oddVals.push_back(l[i]);
        }
    }

    sort(evenVals.begin(), evenVals.end());

    vector<int> result;
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

    std::vector<int> l;
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        l.push_back(val);
    }

    std::cout << "[";
    for (int i = 0; i < l.size() - 1; ++i) {
        std::cout << l[i] << ", ";
    }
    std::cout << l.back() << "]\n";

    if (issame(l, sort_even(l)))
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}