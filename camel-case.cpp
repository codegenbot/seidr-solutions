#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& input) {
    if (input.empty()) {
        return "";
    }

    input.pop_back(); // Remove extra space

    std::stringstream iss(input + " "); 
    std::string word;
    std::string result;

    while (iss >> word && word != "") { 
        if (!result.empty())
            result += char(std::toupper(word[0]));
        else
            result = word; 
        for (int i = 1; i < word.size(); ++i)
            result += char(std::tolower(word[i]));
    }
    
    return result;
}

int main() {
    std::cout << camelCase("camel-case example-test-string") << std::endl;
    return 0;
}