#include <iostream>
#include <bitset>

int solve(int N); 

int main() {
    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;
    std::cout << "The binary representation of the number is: " << std::bitset<32>(N) << std::endl;
}

int solve(int N) {
    return 0; // implement your solution here
}