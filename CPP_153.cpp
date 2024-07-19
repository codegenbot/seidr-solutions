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

std::string class_name = "My";
std::vector<std::string> extensions({"Java", "Python", "C++"}); 
std::cout << Strongest_Extension(class_name, extensions) << std::endl;

assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");

int main() {
    return 0;
}