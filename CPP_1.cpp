#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

vector<string> separate_paren_groups(string paren_string);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a == b);
}

int main() {
    // Add main function code here if needed
    return 0;
}