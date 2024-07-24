#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    vector<int> unique_numbers;

    for(int i = 0; i < numbers.size(); i++){
        bool found = false;
        for(int j = 0; j < unique_numbers.size(); j++){
            if(numbers[i] == unique_numbers[j]){
                found = true;
                break;
            }
        }
        if(!found){
            unique_numbers.push_back(numbers[i]);
        }
    }

    return unique_numbers;
}