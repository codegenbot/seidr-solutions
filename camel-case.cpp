std::string camelCase(std::string str) {
    std::string result = "";
    while (str.find(" ") != std::string::npos || str.find("-") != std::string::npos) {
        size_t pos = str.find(" ");
        if (pos == std::string::npos) {
            pos = str.find("-");
        }
        if (result.empty()) {
            result += toupper(str[0]);
            str.erase(0, 1);
        } else {
            size_t endPos = pos > 0 ? pos : str.find("-");
            result += tolower(str.substr(0, endPos).erase(0, 1));
            str.erase(0, endPos);
        }
    }

    if (!str.empty()) {
        if (isalpha(str[0])) {
            if (!result.empty()) {
                result += toupper(str[0]);
                str.erase(0, 1);
            } else {
                result += tolower(str[0]);
                str.erase(0, 1);
            }
        } else {
            result += str[0];
            str.erase(0, 1);
        }
    }

    while (!str.empty()) {
        size_t pos = str.find(" ");
        if (pos == std::string::npos) {
            pos = str.length();
        }
        result += str.substr(0, pos);
        str.erase(0, pos);
    }

    return result;
}