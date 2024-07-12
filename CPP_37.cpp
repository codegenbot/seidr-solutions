```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (std::abs(a[i] - b[i]) > 1e-6)
            return false;
    return true;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> even_indices;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    even_indices.push_back(l[j]);
                }
            }
            std::sort(even_indices.begin(), even_indices.end());
            result[i] = even_indices[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int cpp37() {
    int n;
    std::cin >> n;
    std::vector<float> l(n);
    for (float &i : l) {
        std::cin >> i;
    }
    l = sort_even(l);
    std::cout << "Sorted array: ";
    for (const auto &i : l) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}