#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> strange_sort_list(const std::vector<int>& v){
    std::vector<int> sorted_v = v;
    std::sort(sorted_v.begin(), sorted_v.end());
    return sorted_v;
}

int main(){
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};

    if(issame(vec1, vec2)){
        std::cout << "Vectors are the same" << std::endl;
    } else {
        std::cout << "Vectors are different" << std::endl;
    }

    assert(issame(strange_sort_list({111111}), {111111}));

    return 0;
}