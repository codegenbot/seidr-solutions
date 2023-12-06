
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

The issue is that you have defined two `main` functions, one in line 17 and another in line 23. You can fix this by removing one of the `main` functions or renaming one of them. I would suggest renaming the second `main` function to something like `test_remove_vowels`.
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

int test_remove_vowels() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}
```