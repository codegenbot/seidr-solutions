#include <string>

std::string int_to_mini_roman(int num) {
    if (num <= 0)
        return "";
    return toMiniRomanHelper(num, "", "MDC");
}

std::string toMiniRomanHelper(int num, std::string roman, std::string symbols) {
    if (num == 0)
        return roman;
    int val = getVal(symbols);
    if (num >= val) {
        roman += getSymbol(symbols);
        return toMiniRomanHelper(num - val, roman, removeFirst(symbols));
    } else {
        return toMiniRomanHelper(num, roman, removeFirst(symbols));
    }
}

int getVal(std::string symbols) {
    int val = 0;
    if (symbols.find("M") != std::string::npos)
        val = 1000;
    else if (symbols.find("D") != std::string::npos)
        val = 500;
    else if (symbols.find("C") != std::string::npos)
        val = 100;
    return val;
}

std::string getSymbol(std::string symbols) {
    if (symbols.find("M") != std::string::npos)
        return "M";
    else if (symbols.find("D") != std::string::npos)
        return "D";
    else if (symbols.find("C") != std::string::npos)
        return "C";
    return "";
}

std::string removeFirst(std::string symbols) {
    if (symbols.length() > 0)
        return symbols.substr(1);
    return "";
}