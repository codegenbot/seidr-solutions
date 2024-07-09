#include <vector>
#include <algorithm>

bool issame(std::vector<float> vec1,std::vector<float>vec2){
    if(vec1.size() != vec2.size()) return false;
    for(int i=0; i<vec1.size(); i++){
        if(abs(vec1[i]) != abs(vec2[i])) return false;
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> input) {
    std::vector<float> result(input.size());
    int j = 0;
    for (int i = 0; i < input.size(); i++) {
        if (i % 2 == 0) {
            for(int k=i; k< input.size(); k=k+2){
                result[j++] = input[k];
            }
            std::sort(result.begin(),result.end());
            for(int i=0; i<4 && j<i+4;i++){
                result[i] = 0;
            }
        } else {
            result[i] = input[i];
        }
    }
    return result;
}