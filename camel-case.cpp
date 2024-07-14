#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, char sep) {
    std::vector<std::string> segments;
    size_t pos = 0, lastPos = 0;
    do {
        lastPos = str.find(sep, pos);
        if (lastPos == std::string::npos) {
            segments.push_back(str.substr(pos));
            break;
        }
        segments.push_back(str.substr(pos, lastPos - pos));
        pos = lastPos + 1;
    } while (true);
    return segments;

}

std::string camelCase(const std::string& str) {
    std::vector<std::string> segments = split(str, '-');
    for (size_t i = 0; i < segments.size(); ++i) {
        if (!segments[i].empty()) {
            size_t pos = 0;
            do {
                lastPos = segments[i].find(' ', pos);
                if (lastPos == std::string::npos) {
                    break;
                }
                segments[i][pos] = toupper(segments[i][pos]);
                pos = lastPos + 1;
            } while (true);
        }
    }
    std::string result;

    for (size_t i = 0; i < segments.size(); ++i) {
        if (!result.empty()) {
            result += toupper(segments[i][0]);
        } else {
            result += tolower(segments[i][0]);
        }
        result += segments[i].substr(1);
        if (i < segments.size() - 1)
            result += " ";
    }

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << camelCase(input) << std::endl;
    return 0;
}