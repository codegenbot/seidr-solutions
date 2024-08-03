#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) { 
    return a == b; 
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> uniqueNumbers;
    for(int i = 0; i < numbers.size(); i++){
        bool found = false;
        for(int j = 0; j < uniqueNumbers.size(); j++){
            if(std::equal(uniqueNumbers.begin(), uniqueNumbers.end(), &numbers[i], [](int a, int b){ return a == b; })){
                found = true;
                break;
            }
        }
        if(!found){
            uniqueNumbers.push_back(numbers[i]);
        }
    }
    return uniqueNumbers;
}