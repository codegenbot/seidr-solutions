#include <vector>

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result = l;
    for(int i = 0; i < result.size(); i++){
        result[i]++;
    }
    return result;
}