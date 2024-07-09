```
#include <vector>
#include <iostream>

int main() {
    std::vector<int> arr = {2,4,3};
    int result = pluck(arr).size();
    std::cout << "Number of elements: " << result << std::endl;
    return 0;
}

std::vector<std::vector<int>> pluck(std::vector<int> arr) {
    std::vector<std::vector<int>> result;
    if (arr.empty()) return result;

    int smallest_even = INT_MAX;
    int index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index = i;
        }
    }

    std::vector<int> output;
    output.push_back(smallest_even);
    output.push_back(index);

    result.push_back(output);

    return result;
}