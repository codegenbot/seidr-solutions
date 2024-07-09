```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

std::string Strongest_Extension(const std::string& className, const std::vector<std::string>& extensions) {
    for (const auto& extension : extensions) {
        if (className.length() + 1 + extension.length() <= 255) {
            return className + "." + extension;
        }
    }
    return "";
}

int main() {
    std::string class_name;
    std::cout << "Enter the class name: ";
    std::cin >> class_name;

    std::vector<std::string> extensions;
    std::cout << "Enter the list of extensions (separated by space): ";
    std::string temp;
    while(std::cin >> temp) {
        extensions.push_back(temp);
    }

    std::cout << Strongest_Extension(class_name, extensions) << std::endl;

    return 0;
}