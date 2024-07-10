```cpp
#include <iostream>
#include <string>
#include <cctype>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1; 
        } else if (islower(c)) {
            std::string str = "";
            for(char d : s) {
                if(isupper(d))
                    str += (d - 'A' + 1) + '0';
                else
                    str += d;
            }
            sum = std::stoi(str);
        }
    }
    return sum;

}

int main() {
    std::cout << "Please enter a string: ";
    std::string s;
    std::cin >> s;
    int result = digitSum(s);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}