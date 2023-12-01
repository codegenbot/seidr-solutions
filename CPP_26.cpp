#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int x, int y){
    return x == y;
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

int main(){
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for(int i=0; i<n; i++){
        std::cin >> numbers[i];
    }
    std::vector<int> unique_numbers = remove_duplicates(numbers);
    for(int i=0; i<unique_numbers.size(); i++){
        std::cout << unique_numbers[i] << " ";
    }
    return 0;
}