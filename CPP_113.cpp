#include <vector>
#include <string>
#include <cassert>

int odd_count(std::vector<std::string> lst) {
    int total_count = 0;
    for (const std::string& str : lst) {
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                total_count++;
            }
        }
    }
    return total_count;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame({std::to_string(odd_count({"271", "137", "314"})),
                   std::to_string(odd_count({"314", "271", "137"})),
                   std::to_string(odd_count({"271", "314", "137"}))},
                   {"2", "3", "2"}));
    return 0;
}