#include <string>
#include <cassert>

int how_many_times(const std::string& str, const std::string& substring) {
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
    int result = how_many_times(str, "john");
    assert(result == 1);
}