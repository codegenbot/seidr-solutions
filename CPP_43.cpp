#include <unordered_set>

bool pairs_sum_to_zero(vector<int> l){
    unordered_set<int> set;
    for(int num : l){
        if(set.count(-num) > 0){
            return true;
        }
        set.insert(num);
    }
    return false;
}