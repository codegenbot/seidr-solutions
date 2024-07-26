#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int sorted_list_sum(const vector<int>& lst) {
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    return accumulate(sorted_lst.begin(), sorted_lst.end(), 0);
}

int main() {
    vector<int> v1 = {3, 1, 4, 1, 5, 9};
    vector<int> v2 = {2, 7, 1, 8, 2, 8};

    if (issame(v1, v2)) {
        cout << "Vectors are the same." << endl;
    } else {
        cout << "Vectors are different." << endl;
    }

    cout << "Sum of sorted list: " << sorted_list_sum(v1) << endl;

    return 0;
}