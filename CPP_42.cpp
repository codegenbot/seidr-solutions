#include <vector>

std::vector<int> incr_list(int n){
    std::vector<int> result;
    for(int i = 1; i <= n; ++i){
        result.push_back(i);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}