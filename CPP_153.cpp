#include <iostream>
#include <vector>

int Strongest_Extension(const std::vector<std::string>& extensions);

int main() {
    const std::vector<std::string> extensions{"671235", "Bb"};
    int strength = Strongest_Extension(extensions);
    std::cout << strength << std::endl;
    return 0;
}
```