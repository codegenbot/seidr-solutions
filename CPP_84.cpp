#include <cassert>
#include <iostream>
#include <string>

int solve(int n) {
    std::string binary = "";
    while(n > 0) {
        if(n % 2 == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;
        n /= 2;
    }
    if (binary.length() == 0) {
        std::cout << "Error: Input is not a positive integer." << std::endl;
        return -1;
    }
    return std::stoi(binary, 0, 2);
}

int main() {
    int expected = solve(963); 
    assert (solve(963) == 18); 
    return 0;
}