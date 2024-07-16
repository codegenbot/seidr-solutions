#include <string>
#include <cassert>

int how_many_times(const std::string& str, const std::string& substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != std::string::npos) {
        count++;
        pos++;
    }
    return count;
}

int main() {
    assert(how_many_times("john doe", "john") == 1);
    return 0;
}