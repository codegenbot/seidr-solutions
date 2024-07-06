#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
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
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<float> l;
    for (int i = 0; i < n; i++) {
        float val;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> val;
        l.push_back(val);
    }

    std::vector<float> result = sort_even(l);

    std::cout << "Sorted even elements: ";
    for (float x : result) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}