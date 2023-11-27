#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(vector<int> lst) {
    int n = lst.size();
    
    // Check if the vector has more than 1 duplicate of the same number
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (lst[i] == lst[j]) {
                count++;
                if (count > 1) {
                    return false;
                }
            }
        }
    }
    
    // Check if the vector is sorted in ascending order
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    
    return lst == sorted_lst;
}

int main() {
    vector<int> lst = {1, 2, 3, 4, 5};
    cout << is_sorted(lst) << endl;
    
    lst = {1, 3, 2, 4, 5};
    cout << is_sorted(lst) << endl;
    
    lst = {1, 2, 3, 4, 5, 6};
    cout << is_sorted(lst) << endl;
    
    lst = {1, 2, 3, 4, 5, 6, 7};
    cout << is_sorted(lst) << endl;
    
    lst = {1, 3, 2, 4, 5, 6, 7};
    cout << is_sorted(lst) << endl;
    
    lst = {1, 2, 2, 3, 3, 4};
    cout << is_sorted(lst) << endl;
    
    lst = {1, 2, 2, 2, 3, 4};
    cout << is_sorted(lst) << endl;
    
    return 0;
}