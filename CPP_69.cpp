#include <iostream>
#include <vector>

int search(std::vector<int> lst) {
    int result = -1;
    for (int num : lst) {
        int freq = 0;
        for (int n : lst) {
            if (n == num) {
                freq++;
            }
        }
        if (num > 0 && freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}