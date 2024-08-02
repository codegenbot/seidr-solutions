#include <algorithm>
#include <vector>

int next_smallest(std::vector<int> lst) {
    std::vector<int> v = lst;
    if(v.size() < 2) return 0;
    std::sort(v.begin(), v.end());
    for(int i=1; i<v.size(); i++){
        if(v[i] != v[0]){
            return v[i];
        }
    }
    return 0;
}