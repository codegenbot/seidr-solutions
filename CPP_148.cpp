#include <type_traits>
#include <string>

bool isSame(const std::string& a, const std::string& b) {
    return a == b;
}

int main() {
    assert(std::is_same(isSame("Jupiter", "Makemake"), bool())); 
}