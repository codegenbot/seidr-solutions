#include <iostream>
#include <algorithm>
#include <vector>

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
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 4, 5};

    if (issame(a, b)) {
        sort(a.begin(), a.end());
        cout << "Sorted list sum: " << sorted_list_sum(a) << endl;
    }

    return 0;
}