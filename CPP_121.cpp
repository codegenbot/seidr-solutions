#include <vector>
#include <iostream>

long long solution(std::vector<int> lst) {
    long long sum = 0;
    for (int i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

void solutions() {   
    if (solution({3, 13, 2, 9}) == 3) {
        std::cout << "Test case passed" << std::endl;
    } else {
        std::cout << "Test case failed" << std::endl;
    }
}

int main() {
    solutions();
    return 0;
}