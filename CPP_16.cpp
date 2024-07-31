#include <iostream>
#include <string>

int count_distinct_characters(std::string str) {
    std::string temp;
    for (char c : str) {
        if (isalpha(c)) {
            while (!temp.empty() && !std::tolower(temp.back()) == std::tolower(c)) {
                temp.pop_back();
            }
            temp += std::tolower(c);
        }
    }
    return temp.size();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    return 0;
}