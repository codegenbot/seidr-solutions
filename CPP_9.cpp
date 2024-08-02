#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2){
    if(v1.size() != v2.size()){
        return false;
    }
    for(size_t i=0; i<v1.size(); i++){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> rolling_max(std::vector<int> numbers);

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    int max_num = numbers[0];
    for(size_t i=0; i<numbers.size(); i++){
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> expected = {1, 2, 3, 4, 5};

    assert(issame(input, expected));

    std::vector<int> result = rolling_max(input);
    std::vector<int> output = {1, 2, 3, 4, 5};
    
    assert(issame(result, output));
    
    return 0;
}