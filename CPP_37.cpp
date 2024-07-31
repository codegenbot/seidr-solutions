#include <cassert>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b){
    for(size_t i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

void sort_even(const std::vector<float>& l){
    std::vector<float> even_elems;
    for(size_t i=0; i<l.size(); i++){
        if(i%2 == 0){
            even_elems.push_back(l[i]);
        }
    }
    std::sort(even_elems.begin(), even_elems.end());
    
    std::vector<float> result;
    int j = 0;
    for(size_t i=0; i<l.size(); i++){
        if(i%2 == 0){
            result.push_back(even_elems[j]);
            j++;
        } else {
            result.push_back(l[i]);
        }
    }
    
    assert(issame(result, std::vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
}