
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

int main() {
    assert(odd_count({"271", "137", "314"}) == 5);
    return 0;
}