#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return (a == b);
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        bool exists = false;
        for(int j = 0; j < result.size(); j++){
            if(issame(result[j], numbers[i])){
                exists = true;
                break;
            }
        }
        if(!exists){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::vector<int> numbers(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> numbers[i];
    }

    std::vector<int> unique_numbers = remove_duplicates(numbers);

    std::cout << "Unique elements: ";
    for(int i : unique_numbers){
        std::cout << i << " ";
    }
    return 0;
}