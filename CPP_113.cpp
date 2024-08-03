#include <cassert>
#include <string>

int odd_count(const std::initializer_list<std::string>& strings){
    int count = 0;
    for (const std::string& str : strings) {
        for (char c : str) {
            if (c >= '0' && c <= '9' && (c - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

bool issame(int result, const std::initializer_list<std::string>& expected_output){
    int i = 0;
    for (const std::string& str : expected_output) {
        if (str.find(std::to_string(result)) == std::string::npos) {
            return false;
        }
        i++;
    }
    return i == expected_output.size();
}

int main() {
    assert(issame(3, {"abc", "def", "ghi", "123", "456"}));
    assert(issame(odd_count({"271", "137", "314"}), { "true" });
    
    return 0;
}