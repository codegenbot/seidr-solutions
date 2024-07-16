std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            if(capitalizeNext) {
                int start = static_cast<int>(s.find(c));
                result += toupper(s.substr(start + 1, 1));
            }
            capitalizeNext = true;
            result.push_back(' ');
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    int start = s.find_first_of(" ");
    while (start != std::string::npos) {
        result += toupper(s.substr(start + 1, 1));
        for (int i = start + 2; i < s.length(); i++) {
            if (s[i] == ' ') {
                start = i;
                break;
            }
            result += tolower(s[i]);
        }
        start = s.find_first_of(" ", start + 1);
    }

    return result;
}