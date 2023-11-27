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
    std::vector<int> input1 = {1, 2, 2, 3, 3, 3};
    int output1 = search(input1);
    std::cout << output1 << std::endl; // Expected output: 3

    std::vector<int> input2 = {1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int output2 = search(input2);
    std::cout << output2 << std::endl; // Expected output: 4

    return 0;
}