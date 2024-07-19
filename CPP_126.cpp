#include<bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int> lst) {
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    
    for (int i = 0; i < sorted_lst.size(); i++) {
        if (i > 0 && sorted_lst[i] == sorted_lst[i - 1]) {
            return false;
        }
    }
    
    return lst == sorted_lst;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    
    return 0;
}