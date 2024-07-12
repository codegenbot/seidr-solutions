#include <iostream>
#include <sstream>

std::string solve(int N){
    int sum = 0;
    while(N > 0) {
        sum += (N & 1);
        N >>= 1;
    }
    std::string result = "";
    while(sum > 0) {
        if(sum % 2 == 0)
            result = "0" + result;
        else
            result = "1" + result;
        sum /= 2;
    }
    return result;
}

int main() {
    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;
    std::cout << solve(N) << std::endl;
    return 0;
}