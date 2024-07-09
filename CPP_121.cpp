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
    int num, n = 0;
    std::vector<int> lst; 
    std::cout << "Enter numbers (terminate with 0): ";
    int count = 0;
    while (count < 100 && std::cin >> num && num != 0) {
        if(count > 0)
            lst.resize(count + 1); 
        else
            lst.push_back(num); 
        count++;
    }
    int result = solutions(lst);
    if(result == 25)
        std::cout << "Test passed.\n";
}