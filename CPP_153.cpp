#include <cassert>
#include <vector>
#include <string>
#include <iostream>

std::string Strongest_Extension(const std::string& class_name, const std::vector<std::string>& extensions) {
    for (const auto& extension : extensions) {
        if (!extension.empty()) {
            return class_name + "." + extension;
        }
    }
    return class_name;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235"}) == "Sp.671235");
    std::cout << Strongest_Extension("My", {"Java", "Python", "C++"})) << std::endl;
    return 0;
}