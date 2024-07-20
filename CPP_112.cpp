#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::string a, std::string b) {
    std::string combined = a + b;
    
    std::string result = "";
    for (char ch : combined) {
        if (result.find(ch) == std::string::npos) {
            result += ch;
        }
    }

    std::reverse(result.begin(), result.end());
    return result == "euarT";
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), ""));
    return 0;
}