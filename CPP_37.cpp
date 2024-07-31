#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b);

void sort_even(std::vector<float>& l);

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    for(size_t i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

void sort_even(std::vector<float>& l) {
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
    
    l = result;
}

int main() {
    std::vector<float> input = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(input);
    
    assert(issame(input, {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10});
    
    return 0;
}