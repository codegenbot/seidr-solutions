#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return equal(a.begin(), a.end(), b.begin());
}

int sorted_list_sum(const vector<int>& lst) {
    return accumulate(lst.begin(), lst.end(), 0);
}

int main() {
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {1, 2, 3, 4, 5};
    
    if (issame(vec1, vec2)) {
        cout << "The vectors are the same." << endl;
    } else {
        cout << "The vectors are different." << endl;
    }

    vector<int> lst = {5, 2, 8, 1, 3};
    sort(lst.begin(), lst.end());
    cout << "Sum of sorted list: " << sorted_list_sum(lst) << endl;

    return 0;
}