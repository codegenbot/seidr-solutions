#include <string>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    size_t pos = str.find(substring);
    while (pos != std::string::npos) {
        count++;
        pos = str.find(substring, pos + 1);
    }
    return count;
}