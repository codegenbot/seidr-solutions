#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> sort_third(std::vector<int> input) {
    std::sort(input.begin(), input.end());
    return input;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v1, v2, v3;
    
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        if (i % 3 == 0) {
            v1.push_back(x);
        } else if (i % 3 == 1) {
            v2.push_back(x);
        } else {
            v3.push_back(x);
        }
    }

    v1 = sort_third(v1);
    v2 = sort_third(v2);
    v3 = sort_third(v3);

    if (issame(v1, v2)) {
        for (int i : v3) std::cout << i << " ";
    } else {
        for (int i : v1) std::cout << i << " ";
        for (int i : v2) std::cout << i << " ";
        for (int i : v3) std::cout << i << " ";
    }

    return 0;
}