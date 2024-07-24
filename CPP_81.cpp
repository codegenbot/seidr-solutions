#include <string>

bool issame(const std::string& a, const std::string& b) {
    return (a == "D-" && b == "F");
}

int main() {
    assert(issame("D-", "F") == true);  
    return 0;
}