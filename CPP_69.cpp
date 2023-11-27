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
    vector<int> input1 = {1, 2, 3, 4, 5};
    int output1 = search(input1);
    
    vector<int> input2 = {2, 2, 3, 3, 4, 4};
    int output2 = search(input2);
    
    vector<int> input3 = {1, 1, 1, 1, 1};
    int output3 = search(input3);
    
    return 0;
}