#include <vector>
#include <iostream>
#include <cassert>

int search(const vector<int>& lst) {
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

int main() {
    cout << (search({3, 10, 10, 9, 2})) << endl;
}