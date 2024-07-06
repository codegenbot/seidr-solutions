#include <vector>
#include <algorithm>

int next_larger(std::vector<int> lst) {
    if(lst.size() < 2) return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    int max = sorted.back();
    sorted.pop_back();
    for(int i = sorted.size()-1; i >= 0; i--){
        if(sorted[i] != max){
            return max * 10 + sorted[i];
        }
    }
    return -1; 
}