```cpp
#include <vector>
#include <cassert>
#include <cinttypes>
#include <iostream>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> pluck(vector<int> arr); // Declare the function before using it

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    result.push_back(minEven);
    result.push_back(minIndex);

    return result;
}

int main() {
    vector<int> input = {7, 9, 7, 1};
    vector<int> output = pluck(input);
    assert(issame(output, vector<int>{}));
    std::cout << "Output: ";
    for (int i : output) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}