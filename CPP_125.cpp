#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;

    while (pos != string::npos) {
        pos = txt.find(' ', prev_pos);
        if (pos == string::npos) {
            result.push_back(txt.substr(prev_pos));
            break;
        }
        if (txt.find(',', pos) != string::npos) {
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
                result.push_back(to_string(count));
            }
            count++;
        }
    }

    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}