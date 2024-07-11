#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> result;
    size_t pos = 0, prev_pos = 0;

    while (pos != std::string::npos) {
        pos = txt.find_first_of(" ,", prev_pos);
        if (pos == std::string::npos) {
            int count = 0;
            for (char c : txt) {
                if (islower(c)) {
                    count++;
                }
            }
            result.push_back(std::to_string(count));
            break;
        }

        string word = txt.substr(prev_pos, pos - prev_pos);
        if (word == std::to_string(count)) {
            result.push_back(word);
        } else {
            result.push_back(to_string(count));
            count = 0;
        }
        prev_pos = pos + 1;
    }

    return result;
}