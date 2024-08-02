#include <string>
#include <cassert>

bool issame(const std::string& a, const std::string& b) {
    return a == b;
}

int main() {
    assert(issame("Jupiter", "Makemake"));
    
    return 0;
}