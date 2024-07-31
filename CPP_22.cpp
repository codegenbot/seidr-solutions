#include <vector>
#include <algorithm>
#include <cassert>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> filter_integers(const std::vector<int>& input){
    std::vector<int> result;
    for(auto &item : input){
        result.push_back(item);
    }
    return result;
}

int main(){
    assert(issame(filter_integers({3, 2, 3, 3, 0, 1}), {3, 3, 3}));
    return 0;
}