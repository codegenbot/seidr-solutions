#include <iostream>
#include <string>

std::string toCamelCase(std::string str) {
    std::vector<std::string> parts = split(str, "-");
    std::string result;
    
    for (int i = 0; i < parts.size(); i++) {
        if (!i) {
            result += toUpper(parts[i]);
        } else {
            result += toLower(parts[i].substr(0, 1)) + parts[i].substr(1);
        }
        if (i < parts.size() - 1) {
            result += " ";
        }
    }
    
    return result;
}

std::vector<std::string> split(const std::string& str, char c) {
    std::vector<std::string> tokens;
    size_t lastPos = 0;
    size_t pos = 0;
    
    do {
        pos = str.find(c, lastPos);
        if (pos != std::string::npos) {
            tokens.push_back(str.substr(lastPos, pos - lastPos));
            lastPos = pos + 1;
        } else {
            tokens.push_back(str.substr(lastPos));
            break;
        }
    } while (pos != std::string::npos);
    
    return tokens;
}

std::string toUpper(const std::string& str) {
    std::string result = str;
    for (char &c : result) {
        c = toupper(c);
    }
    return result;
}

std::string toLower(const std::string& str) {
    std::string result = str;
    for (char &c : result) {
        c = tolower(c);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        cout << toCamelCase(s) << endl;
    }
    return 0;
}