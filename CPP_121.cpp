#include <iostream>
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i % 2 == 0 && lst[i] % 2 != 0)) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(solution({3, 13, 2, 9}) == 3);
    std::vector<int> input;
    int num;
    
    // Read input from user
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        
        if (num == -1)
            break;
        
        input.push_back(num);
    }
    
    // Print the output
    int result = solution(input);
    std::cout << "Sum of odd numbers at even positions: " << result << std::endl;
    
    return 0;
}