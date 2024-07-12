```cpp
#include <vector>
#include <string>

int Strongest_Extension(std::string prefix, std::vector<std::string> suffixes) {
    // Your implementation here...
}

int main() {
    int result = Strongest_Extension("Sp", {"671235", "Bb"}); 
    assert(result == 1);
    return 0;
}