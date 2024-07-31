```cpp
#include <iostream>
#include <string>
using namespace std;

std::string anti_shuffle(std::string str) {
    std::string result = "";
    int i = str.length() - 1;
    while (i >= 0) {
        int j = i;
        for (; j >= 0 && str[j] == str[i]; --j)
            --i;
        result += str.substr(j + 1, i - j);
        --i;
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a sentence: ";
    getline(cin, str);
    std::cout << "Anti-shuffled sentence: " << anti_shuffle(str) << std::endl;
    return 0;
}