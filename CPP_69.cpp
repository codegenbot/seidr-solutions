#include <vector>

int search(vector<int> lst) {
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
    vector<int> test1 = {1, 2, 3, 4, 5};
    int result1 = search(test1);
    
    vector<int> test2 = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    int result2 = search(test2);
    
    vector<int> test3 = {5, 4, 3, 2, 1};
    int result3 = search(test3);
    
    return 0;
}