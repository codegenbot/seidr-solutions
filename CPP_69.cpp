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
    std::vector<int> lst1 = {1, 2, 3, 4, 5};
    int result1 = search(lst1);  // Expected output: 5

    std::vector<int> lst2 = {2, 2, 2, 2, 2};
    int result2 = search(lst2);  // Expected output: 2

    std::vector<int> lst3 = {1, 2, 2, 3, 3, 3};
    int result3 = search(lst3);  // Expected output: 3

    return 0;
}