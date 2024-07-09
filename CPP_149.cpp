```cpp
#include <algorithm>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> list = {"aaaa", "bbbb", "dd", "cc"};
    std::sort(list.begin(), list.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() != b.length()) {
                return a.length() < b.length();
            } else {
                return a < b;
            }
        });
    for (auto it = list.begin(); it != list.end();) {
        if (it->length() % 2 == 1) {
            it = list.erase(it);
        } else {
            ++it;
        }
    }
    for (const auto& str : list) {
        std::cout << str << " ";
    }
    return 0;
}