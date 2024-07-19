```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result = lst;

    // Remove strings with odd lengths from the list
    for (auto it = result.begin(); it != result.end();) {
        if (it->length() % 2 == 1) {
            it = result.erase(it);
        } else {
            ++it;
        }
    }

    // Sort the list by string length and then alphabetically
    std::sort(result.begin(), result.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            } else {
                return a.length() < b.length();
            }
        });

    return result;
}