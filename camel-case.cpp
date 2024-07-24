#include <string>

void toCamelCase(std::string input) {
    result = "";
    size_t pos = 0;
    
    while ((pos = input.find("-")) != std::string::npos) {
        result += input.substr(0, pos);
        
        if (input.length() > pos + 1) {
            result += toupper(input[pos + 1]);
        }
        
        input.erase(0, pos + 1);
    }
    
    if (!input.empty()) {
        result += toupper(input[0]);
        result += input.substr(1);
    } else {
        result = "Error";
    }
}