#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b); // Declaration

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    int max_num = numbers[0];
    for(int i=0; i<numbers.size(); i++){
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){ // Definition
    return a == b;
}

int main(){
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}