#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
    // Compare vectors for equality
    if(a.size() != b.size()){
        return false;
    }
    for (int i = 0; i < a.size(); i++){
        if (a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> l){
    std::vector<float> result;
    std::vector<float> even_values;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
        result.push_back(l[i]);
    }

    std::sort(even_values.begin(), even_values.end());

    for (int i = 0, j = 0; i < result.size(); i += 2, j++) {
        result[i] = even_values[j];
    }

    return result;
}

int main(){
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}