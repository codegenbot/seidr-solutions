#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> rolling_max(std::vector<int> numbers);

int main() {
    std::vector<int> numbers = {1, 3, 5, 2, 8, 7, 6, 4};
    std::vector<int> result = rolling_max(numbers);
    for(int num : result){
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    int max_val = INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        max_val = std::max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}