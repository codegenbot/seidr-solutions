#include <vector>
#include <string>
#include <cassert>

int main() {
    assert(std::vector<std::string>{"Jupiter", "Makemake"} == std::vector<std::string>{});
    return 0;
}