#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

bool is_sorted(vector<int> lst) {
    for(int i = 1; i < lst.size(); i++) {
        if(lst[i] <= lst[i-1]) return false;
    }
    vector<int> uniques(lst.begin(), lst.end());
    sort(uniques.begin(), uniques.end());
    for(int i = 0; i < uniques.size() - 1; i++) {
        if(uniques[i] == uniques[i+1]) return false;
    }
    return true;
}