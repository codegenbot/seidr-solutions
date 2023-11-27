#include <vector>

int search(std::vector<int> lst) {
    int maxFreq = -1;
    int result = -1;
    for (int num : lst) {
        int freq = 0;
        for (int i = 0; i < lst.size(); i++) {
            if (lst[i] == num) {
                freq++;
            }
        }
        if (freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}

int main() {
    // Test the code with different inputs
    std::vector<int> test1 = {1, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5};
    int result1 = search(test1); // Expected output: 5

    std::vector<int> test2 = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2};
    int result2 = search(test2); // Expected output: 2

    std::vector<int> test3 = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int result3 = search(test3); // Expected output: -1

    return 0;
}