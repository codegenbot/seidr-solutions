#include <iostream>
#include <vector>
#include <limits>

std::vector<int> issame(const std::vector<int>& v) {
    if (v.empty()) {
        return {};
    }

    int sameValue = v[0];
    bool isSame = true;

    for (int i = 1; i < v.size(); ++i) {
        if (v[i] != sameValue) {
            isSame = false;
            break;
        }
    }

    if (!isSame) {
        return {};
    }

    std::vector<int> result;
    result.push_back(sameValue);
    return result;
}

std::vector<int> pluck(std::vector<int>& arr) {
    std::vector<int> result;

    int minEvenValue = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }

    if (minEvenValue != INT_MAX) {
        result.push_back(minEvenValue);
        result.push_back(minIndex);
    }

    return result;
}

int main() {
    std::vector<int> v = {1, 2, 3, 4};
    for (const auto& x : pluck(v)) {
        if (std::holds_alternative<int>(x)) {
            std::cout << x << " ";
        } else {
            std::cout << v[std::get<int>(x)] << " ";
        }
    }
    std::cout << "\n";

    for (const auto& x : issame(v)) {
        if (std::holds_alternative<int>(x)) {
            std::cout << x << " ";
        } else {
            std::cout << v[std::get<int>(x)] << " ";
        }
    }
    std::cout << "\n";

    return 0;
}