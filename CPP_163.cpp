#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

void generate_integers(std::vector<int>& vec, int n){
    for(int i = 1; i <= n; ++i){
        vec.push_back(i);
    }
}