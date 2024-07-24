#include <vector>
#include <algorithm>
#include <climits>

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    int max_num = INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}