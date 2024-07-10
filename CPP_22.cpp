#include <vector>
#include <list>
#include <iostream>

std::vector<int> filter_integers(std::list<bool> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value) {
            int val = 0;
            std::cin >> val;
            result.push_back(val);
        }
    }
    return result;
}