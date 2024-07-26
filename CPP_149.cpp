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
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {1, 2, 3, 4, 5};
    
    if (issame(v1, v2)) {
        sort(v1.begin(), v1.end());
        int sum = sorted_list_sum(v1);
        cout << "Sum of sorted list: " << sum << endl;
    }
    
    return 0;
}