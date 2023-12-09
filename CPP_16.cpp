#include <iostream>
#include <string>
#include <vector>

int count_distinct_characters(std::string str) {
    std::vector<char> distinctChars;
    for (auto c : str) {
        if (std::find(distinctChars.begin(), distinctChars.end(), tolower(c)) == distinctChars.end()) {
            distinctChars.push_back(tolower(c));
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