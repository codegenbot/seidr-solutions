#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector a, std::vector b) {
    return a == b;
}

std::vector remove_duplicates(std::vector numbers){
    std::vector result;
    for(int num : numbers){
        if(find(result.begin(), result.end(), num) == result.end()){
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}