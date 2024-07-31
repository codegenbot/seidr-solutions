#include <iostream>
#include <vector>

int add(const std::vector<unsigned int>& v) {
    int sum = 0;
    for (unsigned int i : v) {
        sum += i;
    }
    return sum;
}

std::cout << "Enter the number of elements: ";
while (!(std::cin >> n)) { 
    std::cerr << "Invalid input. Try again.\n";
    std::cout << "Enter the number of elements: ";
    (std::cin >> std::ws).clear();
    if ((std::cin).eof()) {
        return 1; 
    }
}

std::vector<unsigned int> lst;
for(unsigned int i = 0; i < n; i++){
    unsigned int num;
    while (!(std::cin >> num)) { 
        std::cerr << "Invalid input. Try again.\n";
        std::cout << "Enter element " << i+1 << ": ";
        (std::cin >> std::ws).clear();
        if ((std::cin).eof()) {
            return 1; 
        }
    }
    lst.push_back(num);
}

int sum = 0;
for(unsigned int i = 0; i < lst.size(); i++){
    if(lst[i] % 2 == 0)
        sum += lst[i];
}
std::cout << "Sum of even elements: " << add(lst) << std::endl;

return 0;