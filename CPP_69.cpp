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
    std::vector<int> test1 = {1, 2, 3, 4, 5};
    std::vector<int> test2 = {5, 4, 3, 2, 1};
    std::vector<int> test3 = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    
    int result1 = search(test1);
    int result2 = search(test2);
    int result3 = search(test3);
    
    return 0;
}