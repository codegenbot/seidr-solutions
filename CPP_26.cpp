#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b){
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(std::count(numbers.begin(), numbers.end(), numbers[i], issame) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main() {
    // Test the remove_duplicates function
    std::vector<int> numbers = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    std::vector<int> unique_numbers = remove_duplicates(numbers);

    // Print the unique numbers
    for(int i=0; i<unique_numbers.size(); i++){
        std::cout << unique_numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}