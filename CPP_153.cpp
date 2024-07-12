```cpp
#include <vector>
#include <string>

std::vector<std::pair<std::string, std::string>> extensions;

void Strongest_Extension() {
    extensions.push_back({"HTML", "HyperText Markup Language"});
    extensions.push_back({"CSS", "Cascading Style Sheets"});
    extensions.push_back({"JS", "JavaScript"});
}

int main() {
    Strongest_Extension();
    return 0;
}