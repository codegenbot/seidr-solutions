#include <iostream>
#include <vector>
#include <string>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::string s = "";
    for (int i : arr) {
        s += std::to_string(i);
    }
    int left = 0, right = n - 1;
    int changes = 0;
    while (left < right) {
        if (s[left] != s[right]) {
            changes++;
            left++;
        } else {
            left++;
            right--;
        }
    }
    return changes;
}

int main() {
    assert(smallest_change({0, 1}) == 1);
    std::vector<int> testArr = {2, 3};
    int result = smallest_change(testArr);
    std::cout << "Test case: " << testArr[0] << ", " << testArr[1] << ". Expected output: " << (result == 1 ? "1" : "0") << ". Actual output: " << result;
    return 0;
}