```
#include <iostream>
#include <string>
#include <algorithm>

int count_distinct_characters(std::string str) {
    std::vector<char> distinctChars;
    for (auto c : str) {
        if (find(distinctChars.begin(), distinctChars.end(), tolower(c)) == distinctChars.end()) {
            distinctChars.push_back(tolower(c));
        }
    }
    return distinctChars.size();
}

int main() {
    std::string str = "Jerry jERRY JeRRRY";
    int count = count_distinct_characters(str);
    std::cout << "Number of distinct characters: " << count << std::endl;
    return 0;
}
```