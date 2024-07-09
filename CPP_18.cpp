#include <string>

int count_strings(const std::string& str, const std::string& substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != std::string::npos) {
        count++;
        str.erase(pos, substring.length());
    }
    return count;
}

int main() {
    std::string str = "john doe";
    std::string substring = "john";
    int result = count_strings(str, substring);
    assert(result == 1);
}