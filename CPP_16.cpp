#include <iostream>
#include <string>
#include <cctype>

int count_distinct_characters(std::string str) {
    std::vector<char> distinctChars;
    for (auto c : str) {
        if (std::find(distinctChars.begin(), distinctChars.end(), std::tolower(c)) == distinctChars.end()) {
            distinctChars.push_back(std::tolower(c));
        }
    }
    return distinctChars.size();
}

int main() {
    std::string input = "Jerry jERRY JeRRRY";
    int count = count_distinct_characters(input);
    std::cout << "Number of distinct characters: " << count << std::endl;
    return 0;
}