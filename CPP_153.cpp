#include <cassert>
#include <vector>
#include <string>
#include <cstdint>

int Strongest_Extension(const std::string& prefix, const std::vector<std::string>& extensions) {
    for (const auto& extension : extensions) {
        if (!extension.empty()) {
            return prefix + "." + extension;
        }
    }
    return prefix;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == std::string("Sp.671235"));
    return 0;
}