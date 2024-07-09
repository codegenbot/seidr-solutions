#include <iostream>
#include <string>

int starts_one_ends(int n); 

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    int result = starts_one_ends(n);
    std::cout << "The count of the numbers of " << std::to_string(n) << "-digit positive integers that start or end with 1 is: " << result << std::endl;
    return 0;
}

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= pow(10, n-1); i++) {
        if ((i/pow(10,floor(log10(i))))%10 == 1 || (i%10) == 1)
            count++;
    }
    return count;
}