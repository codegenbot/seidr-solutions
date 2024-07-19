```cpp
#include <iostream>
#include <string>

std::string solve(int N) {
    std::string result = "";
    while (N > 0) {
        int remainder = N % 2;
        if(remainder == 1)
            result += "1";
        else 
            result += "0";
        N /= 2;
    }
    return result;
}

int main() {
    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;
    std::cout << "Binary representation of the number is: " << solve(N) << std::endl;
}