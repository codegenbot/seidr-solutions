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
        if (i % 2 == 0 && sum > 0)
            sum -= i; 
        else
            break;
    }
    return sum;
}

int main() {
    std::vector<int> lst(10); // Initialize with a minimum size (10 in this case)
    int num, n = 1;
    while (true) {
        std::cout << "Enter numbers (terminate with 0): ";
        std::cin >> num;
        if(num != 0)
            lst.push_back(num); 
        else
            break;

        if (num % 2 != 0) {
            sumOdd += num; // Initialize sumOdd here
        }
        if(sumOdd > 25)
            break;
    }
    int result = solutions(lst);
    if(result == 25)
        std::cout << "Test passed.\n";
}