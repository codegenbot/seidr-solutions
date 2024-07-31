#include <vector>
#include <algorithm>
#include <cassert>
#include <any> // Include the necessary header for std::any

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> filter_integers(const std::vector<std::any>& input){
    std::vector<int> result;
    for(auto &item : input){
        if(item.type() == typeid(int)){
            result.push_back(std::any_cast<int>(item));
        }
    }
    return result;
}

int main(){
    assert(issame(filter_integers({std::any(3), std::any('c'), std::any(3), std::any(3), std::any('a'), std::any('b')}), {3, 3, 3}));
    return 0;
}