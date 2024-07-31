```cpp
#include <string>

int count_distinct_characters(std::string str) {
    std::string temp = "";
    for (char c : str) {
        if (isalpha(c)) {
            while (!temp.empty() && !temp.back() == tolower(c)) {
                temp.pop_back();
            }
            temp += tolower(c);
        }
    }
    return temp.size();
}