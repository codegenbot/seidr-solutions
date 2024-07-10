#include <iostream>
#include <vector>

int sumVector(std::vector<int> lst) {
    int total = 0;
    for(int i : lst){
        total += i;
    }
    return total;
}

int main() {
    std::vector<int> input;
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    for (int i = 0; i < size; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        input.push_back(num);
    }

    int result = sumVector(input);
    std::cout << "The sum is: " << result << std::endl;

    return 0;
}