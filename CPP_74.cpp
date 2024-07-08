#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> total_match(std::vector<std::string>, std::vector<std::string>) {
    // implementation of the total_match function
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (strcmp(a[i].c_str(), b[i].c_str()) != 0)
            return false;
    }
    return true;
}

int main() {
    // your main code
}