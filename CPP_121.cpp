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
    int n;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;
    
    std::cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        testList.push_back(num);
    }
    
    int result = solutions(testList);
    std::cout << "The sum is: " << result << std::endl;
    
    return 0;
}