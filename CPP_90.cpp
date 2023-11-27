#include <vector>
#include <algorithm>
#include <climits>

const int None = INT_MIN;

int next_smallest(vector<int> lst){
    if(lst.size() < 2){
        return None;
    }
    sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] > smallest){
            return lst[i];
        }
    }
    return None;
}