#include <vector>
#include <string>
#include <assert.h>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int test() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> filtered;
    filtered = filterBySubstring(str, "run"); 
    assert(issame({},filtered)); 
    return 0;
}

int main() {
    test();
    return 0;
}