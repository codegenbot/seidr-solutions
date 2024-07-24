#include <iostream>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int* remove_duplicates(int numbers[], int n){
    std::vector<int> result;
    for(int num : {numbers[0], numbers[1], numbers[2]}){
        if(find(result.begin(), result.end(), num) == result.end()){
            result.push_back(num);
        }
    }
    return &result[0];
}

int main() {
    int numbers[] = {1, 2, 3, 2, 4, 3, 5};
    assert(issame({*(numbers+0), *(numbers+1), *(numbers+2)}, {1, 4, 5}));
    return 0;
}