```cpp
#include <iostream>
#include <vector>

int add(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    if (!(std::cin >> n)) { 
        std::cerr << "Invalid input. Try again.\n";
        return 1; 
    }
    while (!(n > 0)) {
        std::cout << "Please enter a positive integer: ";
        if (!(std::cin >> n)) { 
            std::cerr << "Invalid input. Try again.\n";
            return 1; 
        }
    }

    std::vector<int> lst;
    for(int i = 0; i < n; i++){
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        if (!(std::cin >> num)) { 
            std::cerr << "Invalid input. Try again.\n";
            return 1; 
        }
        lst.push_back(num);
    }

    int sum = 0;
    for(int i = 0; i < lst.size(); i++){
        if(lst[i] % 2 == 0)
            sum += lst[i];
    }
    std::cout << "Sum of even elements: " << sum << std::endl;

    return 0;
}