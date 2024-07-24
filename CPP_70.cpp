#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

bool strange_sort_list(const std::vector<int>& vec){
    std::vector<int> sorted_vec = vec;
    std::sort(sorted_vec.begin(), sorted_vec.end());
    return issame(vec, sorted_vec);
}

int main(){
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};

    if(issame(vec1, vec2)){
        std::cout << "Vectors are the same" << std::endl;
    } else {
        std::cout << "Vectors are different" << std::endl;
    }

    assert(issame(std::vector<int>{111111}, std::vector<int>{111111}));

    assert(issame(strange_sort_list(std::vector<int>{111111}), std::vector<int>{111111}));

    return 0;
}