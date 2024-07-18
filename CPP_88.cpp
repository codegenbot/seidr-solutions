#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(const std::vector<int>& array) {
    if(array.empty()) return array;
    std::vector<int> sorted_array = array;
    if((array.front() + array.back()) % 2 == 0)
        std::sort(sorted_array.rbegin(), sorted_array.rend());
    else
        std::sort(sorted_array.begin(), sorted_array.end());
    return sorted_array;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    std::vector<int> array = {21, 14, 23, 11};
    assert(issame(sort_array(array), {23, 21, 14, 11}));
}