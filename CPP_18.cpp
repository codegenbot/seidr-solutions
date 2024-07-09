#include <string>

int how_many_times(const std::string& str, const std::string& substring) {
    int count = 0;
    size_t pos = 0;
    std::string modifiedStr = str; 
    while ((pos = modifiedStr.find(substring)) != std::string::npos) {
        count++;
        modifiedStr.erase(pos, substring.length());
    }
    return count;
}

int main() {
    std::string str = "john doe";
    int result = how_many_times(str, "john");
    assert(result == 1);
}