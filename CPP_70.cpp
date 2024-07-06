#include <iostream>
#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> strange_sort_list(std::vector<int> vec) {
    if (vec.size() <= 1)
        return vec;  
    std::sort(vec.begin(), vec.end());
    for(int i = 0; i < vec.size()-1; i++){
        for(int j = 0; j < vec.size()-i-1; j++) {
            if(vec[j]>vec[j+1]){
                int temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
    return vec;
}

int run() {
    std::vector<int> input = {1, 2};
    assert(issame(strange_sort_list(input), input));
    return 0;
}