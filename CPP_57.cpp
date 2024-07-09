#include <iostream>
#include <vector>
#include <assert.h>

bool monotonic(const std::vector<float>& l) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < l.size(); i++) {
        if (l[i] > l[i - 1]) {
            decreasing = false;
        } else if (l[i] < l[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    int n;
    std::vector<float> l;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        float x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        l.push_back(x);
    }

    assert(monotonic(l) == true);

    return 0;
}