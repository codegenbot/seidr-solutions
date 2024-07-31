#include <vector>
#include <any>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> filter_integers(const std::vector<std::any>& input){
    std::vector<int> result;
    for(const auto &item : input){
        if(item.type() == typeid(int)){
            result.push_back(std::any_cast<int>(item));
        }
    }
    return result;
}

int main(){
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}