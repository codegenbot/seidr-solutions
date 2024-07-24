```
#include <vector>
#include <string>

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> result;
    size_t pos = 0, prev_pos = 0;

    while (pos != std::string::npos) {
        pos = txt.find(' ', prev_pos);
        if (pos == std::string::npos) {
            result.push_back(txt.substr(prev_pos));
            break;
        }
        if (txt.find(',', pos) != std::string::npos) {
            size_t comma_pos = txt.find(',', pos);
            if (comma_pos < pos) {
                pos = comma_pos;
            }
        }
        result.push_back(txt.substr(prev_pos, pos - prev_pos));
        prev_pos = pos + 1;
    }

    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if ((int)c >= 97 && (int)c <= 122 && (count & 1)) {
                result.push_back(std::to_string(count));
            }
            count++;
        }
    }

    return result;
}