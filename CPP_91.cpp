```cpp
#include <iostream>
#include <string>

int is_bored(std::string S) {
    int count = 0;
    std::string boredom = "I am bored";
    size_t pos = S.find(boredom);
    while (pos != std::string::npos) {
        count++;
        auto boredom_iter = S.begin() + pos;
        while (*boredom_iter++ == boredom[0]) {
            if (std::string(borrow_iter, boredom.length()) != boredom) break;
            count++;
            pos += boredom.length();
            boredom_iter += boredom.length();
        }
    }
    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = is_bored(input);
    std::cout << "The count of 'I am bored' in your string is: " << result << std::endl;
    return 0;
}