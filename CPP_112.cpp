#include <vector>
#include <algorithm>
#include <string> // Add this header for string operations

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a[0].compare(b[0]) == 0 && a[1].compare(b[1]) == 0;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string reverse_result = result;
    std::reverse(reverse_result.begin(), reverse_result.end());
    return {result, result == reverse_result ? "True" : "False"};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"})); // Call reverse_delete with correct parameters
    return 0;
}