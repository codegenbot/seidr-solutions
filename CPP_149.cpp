#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return equal(a.begin(), a.end(), b.begin());
}

int sorted_list_sum(const vector<int>& lst) {
    int sum = 0;
    for (int num : lst) {
        sum += num;
    }
    return sum;
}

int main() {
    // Main function code here
    return 0;
}