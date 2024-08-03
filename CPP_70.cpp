#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){

std::vector<int> strange_sort_list(std::vector<int> lst){
    sort(lst.begin(), lst.end());
    std::vector<int> result;
    int start = 0, end = lst.size() - 1;
    while (start <= end) {
        result.push_back(lst[start++]);
        if (start <= end) {
            result.push_back(lst[end--]);
        }
    }
    return result;
}