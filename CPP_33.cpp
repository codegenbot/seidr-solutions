#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> sort_third(vector<int>& l){
    vector<int> l_sorted = l;
    sort(l_sorted.begin(), l_sorted.end());
    for(int i = 0; i < l_sorted.size(); i++){
        if(i % 3 == 0){
            l_sorted[i] = l[i];
        }
    }
    return l_sorted;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    assert(issame(sort_third({1, 2, 3, 4, 5, 6, 7, 8, 9}), {1, 2, 3, 4, 5, 6, 7, 8, 9}));
    assert(issame(sort_third({9, 8, 7, 6, 5, 4, 3, 2, 1}), {1, 8, 7, 6, 5, 4, 3, 2, 9}));
    assert(issame(sort_third({}), {}));
    assert(issame(sort_third({1}), {1}));
    assert(issame(sort_third({1, 2, 3}), {1, 2, 3}));
    assert(issame(sort_third({3, 2, 1}), {1, 2, 3}));
    assert(issame(sort_third({1, 2, 3, 4}), {1, 2, 3, 4}));
    assert(issame(sort_third({4, 3, 2, 1}), {1, 3, 2, 4}));

    cout << "All test cases passed!" << endl;

    return 0;
}