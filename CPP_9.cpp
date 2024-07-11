#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    int max_num = INT_MIN;
    for(int i = 0; i < numbers.size(); i++){
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

int main(){
    std::vector<int> input = {1, 3, 5, 4, 2};
    std::vector<int> output = rolling_max(input);

    std::vector<int> expected_output = {1, 3, 5, 5, 5};
    assert(issame(output, expected_output));

    return 0;
}