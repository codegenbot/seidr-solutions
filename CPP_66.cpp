```cpp
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1; 
        } else if (islower(c)) {
            int temp = 0;
            do {
                for (char d : s) {
                    if (isupper(d)) {
                        temp *= 26;
                        temp += d - 'A' + 1;
                    } else if (islower(d)) {
                        temp *= 26;
                        temp += tolower(d) - 'a' + 1;
                    }
                }
            } while (std::next_permutation(s.begin(), s.end()));
            sum = temp;
        }
    }
    return sum;

}

int main() {
    std::cout << "Please enter a string: ";
    std::string s;
    std::cin >> s;
    assert(digitSum(s) == 327);
    return 0;
}