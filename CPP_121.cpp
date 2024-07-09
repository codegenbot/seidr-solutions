```cpp
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
    std::vector<int> lst;
    int num, n = 1;
    int sumOdd = 0;
    while (true) {
        std::cout << "Enter numbers (terminate with 0): ";
        int num;
        std::cin >> num;
        if(num != 0)
            lst.push_back(num); 
        else
            break;

        sumOdd += num; // Replace sumOdd(lst) with num
        if(sumOdd > 25)
            break;
    }
    int result = solutions(lst);
    if(result == 25)
        std::cout << "Test passed.\n";
}