#include <iostream>
#include <vector>

int solutions(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> testList;
    int num;
    
    std::cout << "Enter numbers separated by space: ";
    while(std::cin >> num) {
        testList.push_back(num);
    }
    
    if(testList.size() > 0) {
        int result = solutions(testList);
        std::cout << "Sum of even-indexed odd numbers is: " << result << std::endl;
    } else {
        std::cout << "No numbers entered." << std::endl;
    }
    
    return 0;
}