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
    vector<int> lst1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result1 = search(lst1);
    // Expected output: 10

    vector<int> lst2 = {5, 5, 5, 5, 5};
    int result2 = search(lst2);
    // Expected output: 5

    vector<int> lst3 = {1, 2, 3, 4, 4, 3, 2, 1};
    int result3 = search(lst3);
    // Expected output: 4

    return 0;
}