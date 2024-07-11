#include <vector>
#include <string>

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> result;
    size_t pos = 0, prev_pos = 0;

    while (pos != std::string::npos) {
        pos = txt.find_first_of(" ,", prev_pos);
        if (pos == std::string::npos) {
            // No whitespaces or commas found
            int count = 0;
            for (char c : txt) {
                if (islower(c)) {
                    count++;
                }
            }
            result.push_back(std::to_string(count));
            break;
        }

        std::string word = txt.substr(prev_pos, pos - prev_pos);
        if (count_words(word) == std::stoi(word)) {
            result.push_back("same");
        } else {
            result.push_back(word);
        }

        prev_pos = pos + 1;
    }

    return result;
}

int count_words(const std::string& word) {
    int count = 0;
    for (char c : word) {
        if (islower(c)) {
            count++;
        }
    }
    return count;
}