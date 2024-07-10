#include <iostream>
#include <string>
#include <cctype>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1; 
        } else if (islower(c)) {
            char temp = std::toupper(c);
            while(temp != 'Z') {
                sum += (temp - 'A' + 1); 
                for(char i='Z';i>='A';--i) {
                    if(i==temp+1) {
                        temp=i;
                        break;
                    }
                }
            }
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    std::cout << digitSum("You arE Very Smart") << std::endl;
    return 0;
}