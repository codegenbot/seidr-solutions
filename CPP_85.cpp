#include <vector>

int add(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 == 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(add({4, 4, 6, 8}) == 12);
    std::vector<int> numbers;
    int num;
    
    // Input the numbers
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        
        if (num == -1)
            break;
        
        numbers.push_back(num);
    }
    
    // Calculate and print the sum of even numbers
    int total = add(numbers);
    std::cout << "Sum of even numbers: " << total << std::endl;
    
    return 0;
}