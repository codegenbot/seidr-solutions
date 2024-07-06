#include <vector>
#include <algorithm>
#include <cassert>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i=0; i<sorted.size()-1; i++) {
        if(sorted[i] != sorted[i+1]) {
            for(int j=0; j<lst.size(); j++) {
                if(lst[j] == sorted[i+1]) return lst[j];
            }
        }
    }
    return -1; 
}