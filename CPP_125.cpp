#include <vector>
#include <string>
#include <cctype>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) { return a == b; }

std::pmr::string str;

std::vector<std::pmr::string> split_words(std::pmr::string txt) {
    pmr::pstring result;
    bool inWord = false;
    str = "";

    for (char c : txt) {
        if (!inWord && !isalpha(c)) { 
            if (c == ',') {
                continue;
            }
            inWord = true;
        } else if (inWord && !isalpha(c)) { 
            result += str;
            str = "";
            inWord = false;
        } else {
            str += c;
        }
    }

    if (inWord) {
        result += str;
    }
    return std::vector<std::pmr::string>(1, result);
}

int main() {
    bool b;
    assert(isSame(std::vector<std::pmr::string>(1, ""), std::vector<std::pmr::string>(1, "0")));
}