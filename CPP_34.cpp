#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    return a == b;
}

int main() {
    std::vector<int> vec1, vec2;

    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        vec1.push_back(num);
    }

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        vec2.push_back(num);
    }

    if (issame(vec1, vec2)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }

    return 0;
}