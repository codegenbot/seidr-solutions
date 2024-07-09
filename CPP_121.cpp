#include <iostream>
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> input;
    int num;
    
    std::cout << "Enter the numbers (enter -1 to stop):" << std::endl;

    while(true) {
        std::cin >> num;
        
        if(num == -1)
            break;
            
        input.push_back(num);
    }
    
    int result = solution(input);
    std::cout << "Sum of odd numbers: " << result << std::endl;
    
    return 0;
}