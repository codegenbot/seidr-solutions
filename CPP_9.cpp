#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    int max_num = INT_MIN;
    for(int i = 0; i < numbers.size(); i++){
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> numbers = {3, 1, 5, 2, 4};
    std::vector<int> result = rolling_max(numbers);
    assert(issame(result, {3, 3, 5, 5, 5}));
    return 0;
}