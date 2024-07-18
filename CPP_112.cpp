#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::pair<std::string, std::string>& a, const std::pair<std::string, std::string>& b) {
    return a == b;
}

std::pair<std::string, std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result = s;
    for (char ch : c) {
        result.erase(std::remove(result.begin(), result.end(), ch), result.end());
    }

    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());

    return {result, (result == reversed) ? "True" : "False"};
}

int main() {
    std::pair<std::string, std::string> test_result = reverse_delete("mamma", "mia");
    assert(issame(test_result, {"", "True"}));

    return 0;
}