#include <vector>

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result = l;
    for(int& val : result) {
        val++;
    }
    return result;
}