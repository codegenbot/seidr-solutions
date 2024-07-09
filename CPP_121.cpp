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
    std::vector<int> lst;
    for (auto i : {"3", "13", "2", "9"}) {
        int num = std::stoi(i);
        lst.push_back(num);
    }
    int result = solutions(lst);
    assert(result == 25);
    std::cout << "Test passed.\n";
}