#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> input;
    int num;
    std::cout << "Enter numbers (enter -1 to stop): ";
    while((std::cin >> num) && num != -1)
        input.push_back(num);
    int result = specialFilter(input);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}