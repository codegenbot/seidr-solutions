```cpp
#include <iostream>
#include <string>

int how_many_times(const std::string& str, const std::string& substring) {
    int count = 0;
    for (auto it = str.rbegin();; --it) {
        auto pos = std::distance(it, str.rend()) - 1;
        if (pos >= substring.length() && !std::equal(substring.rbegin(), substring.rend(), it)) {
            break;
        }
        count++;
    }
    return count;
}

int main() {
    std::string str, substring;
    std::cout << "Enter the string: ";
    std::getline(std::cin, str);
    std::cout << "Enter the substring: ";
    std::getline(std::cin, substring);
    int result = how_many_times(str, substring);
    std::cout << "The substring appears " << result << " times." << std::endl;
    return 0;
}