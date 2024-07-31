#include <vector>
#include <cassert>

std::vector<int> tri(int n);

std::vector<int> tri(int n){
    std::vector<int> result;
    result.push_back(3);
    for(int i = 1; i <= n; ++i){
        if(i % 2 == 0){
            result.push_back(1 + i / 2);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i + 1]);
        }
    }
    return result;
}