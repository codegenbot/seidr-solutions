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
    std::vector<int> lst;
    int num;
    
    std::cout << "Enter numbers separated by space: ";
    while(std::cin >> num) {
        lst.push_back(num);
    }
    
    if(lst.size() > 0) {
        int result = solution(lst);
        std::cout << "Result: " << result << std::endl;
    } else {
        std::cout << "No numbers entered." << std::endl;
    }

    return 0;
}