#include <iostream>
#include <vector>

int sumOdd(std::vector<int> lst) {
    int sum = 0;
    for (int i : lst) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

int solutions(std::vector<int> lst) { 
    int sum = sumOdd(lst);
    for (int i : lst) {
        if (i % 2 == 0 && i > 0)
            sum -= i; 
    }
    return sum;
}

int main() {
    int num, n = 0;
    std::vector<int> lst;
    std::cout << "Enter numbers (terminate with 0): ";
    while (std::cin >> num) {
        if(num == 0)
            break;
        lst.push_back(num);
        n++;
    }
    
    // Ensure all inputs are processed
    if(lst.size() > 0) {
        int result = solutions(lst);
        std::cout << "Result: " << result << "\n";
    } else {
        std::cout << "No numbers entered.\n";
    }
}