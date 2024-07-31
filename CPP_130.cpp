#include <vector>
#include <cassert>
#include <algorithm>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> tri(int n){
    std::vector<int> result(n + 1);
    result[1] = 3;
    if(n >= 2) result[2] = 1 + n / 2;
    for(int i = 3; i <= n; ++i){
        if(i % 2 == 0){
            result[i] = 1 + i / 2;
        } else {
            result[i] = result[i - 1] + result[i - 2] + result[i + 1];
        }
    }
    return result;
}