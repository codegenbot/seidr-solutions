#include <vector>
#include <cassert>

std::vector<int> tri(int n);

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> tri(int n){
    std::vector<int> result;
    if(n == 0){
        result.push_back(0);
    } else if(n == 1){
        result.push_back(1);
        result.push_back(3);
    } else {
        result.push_back(1);
        result.push_back(3);
        for(int i = 2; i <= n; ++i){
            if(i % 2 == 0){
                result.push_back(1 + i / 2);
            } else {
                result.push_back(result[i - 1] + result[i - 2]);
            }
        }
    }
    return result;
}