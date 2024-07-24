std::string camelCase(std::string inputString) {
    if (inputString[0] == '-') inputString.erase(0, 1); 
    std::string result = "";
    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == '-') {
            i++;
            while (i < inputString.length() && inputString[i] != ' ') {
                result += std::toupper(inputString[i]);
                i++;
            }
            result += " ";
        } else {
            result += std::tolower(inputString[i]);
        }
    }
    return result;
}