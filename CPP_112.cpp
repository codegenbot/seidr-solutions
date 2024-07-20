#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::pair<std::string, std::string> reverse_delete(const std::string& a, const std::string& b) {
    std::string combined = a + b;
    
    std::string result = "";
    for (char ch : combined) {
        if (result.find(ch) == std::string::npos) {
            result += ch;
        }
    }

    std::reverse(result.begin(), result.end());
    return {result, "True"};
}

bool issame(std::string a, std::string b) {
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia").first, ""));
    assert(issame(reverse_delete("mamma", "mia").second, "True"));
    
    return 0;
}