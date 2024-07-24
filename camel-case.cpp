#include <string>
#include <cctype>

std::string camelCase(std::string inputString) {
    if (inputString[0] == '-') {
        for (++inputString.begin(); inputString.begin() != inputString.end(); ++inputString.begin()) {
            if (*inputString.begin() == '-') break;
            *inputString.begin() = std::toupper(*inputString.begin());
        }
    }

    size_t start = 0;
    for (size_t i = 0; i < inputString.size(); ++i) {
        if (inputString[i] == '-' || inputString[i] == ' ') {
            for (++i; i < inputString.size() && inputString[i] != '-'; ++i);
            inputString.erase(i, inputString.size());
            size_t length = i - start;
            std::string temp = inputString.substr(start, length).toupper();
            if (start > 0) {
                inputString.insert(start++, 1, temp[0]);
                for (size_t j = 1; j < length; ++j)
                    inputString.insert(i, 1, tolower(temp[j]));
            } else {
                inputString.replace(0, length, temp);
            }
            start = i;
        }
    }

    return inputString;
}