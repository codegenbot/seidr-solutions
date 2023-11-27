#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst){
    if(lst.size() < 2){
        return 0;
    }
    std::sort(lst.begin(), lst.end());
    return lst[1];
}

int main() {
    std::vector<int> numbers;
    int num;
    while(std::cin >> num){
        numbers.push_back(num);
    }
    
    int result = next_smallest(numbers);
    std::cout << result << std::endl;
    
    return 0;
}