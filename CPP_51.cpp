
Here is a possible solution:
```
#include <iostream>
#include <string>
#include <cassert>

std::string remove_vowels(const std::string& text) {
    std::string vowels = "aeiou";
    std::string result;
    for (auto c : text) {
        if (vowels.find(c) == std::string::npos) {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}
```
In this solution, I have removed the second `main` function and renamed the first one to `main`. This way, there is only one `main` function in the code, which is the entry point of the program.