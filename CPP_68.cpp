```cpp
#include <vector>
#include <utility>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::vector<std::pair<int, int>> result = pluck(arr);

    if (!result.empty()) {
        std::cout << "The first even value at an even index is: ";
        std::cout << "(" << result[0].first << ", " << result[0].second << ")" << std::endl;
    } else {
        std::cout << "No even values found." << std::endl;
    }

    return 0;
}

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> evenNodes;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }

    if (evenNodes.empty()) {
        return {};
    }

    int minEvenValue = evenNodes[0].first;
    int minIndex = evenNodes[0].second;

    for (int i = 1; i < evenNodes.size(); i++) {
        if (evenNodes[i].first < minEvenValue) {
            minEvenValue = evenNodes[i].first;
            minIndex = evenNodes[i].second;
        } else if (evenNodes[i].first == minEvenValue) {
            minIndex = std::min(minIndex, evenNodes[i].second);
        }
    }

    return {{minEvenValue, minIndex}};
}