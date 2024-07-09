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

    // Read numbers from the user until they choose to stop
    while(true) {
        std::cout << "Enter a number (or -1 to stop): ";
        std::cin >> num;

        if(num == -1)
            break;

        input.push_back(num);
    }

    int result = solution(input);

    // Print the result
    std::cout << "The sum of odd numbers is: " << result << std::endl;
    
    return 0;
}