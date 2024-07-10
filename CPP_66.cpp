Here is the corrected code:

```cpp
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1; 
        } else if (islower(c)) {
            for(int i = 0; i < std::pow(2, s.length()); i++) {
                int mask = i;
                for(char d : s) {
                    if(mask & 1)
                        sum += (isupper(d)) ? d - 'A' + 1 : d - 'a' + 1;
                    else
                        sum += (isupper(d)) ? d - 'A' + 27 : d - 'a' + 1;
                    mask >>= 1;
                }
            }
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