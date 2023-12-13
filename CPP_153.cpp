```
#include <iostream>
#include "strongest_extension.h" // assuming this is the header file that declares Strongest_Extension

int main() {
    std::string result = Strongest_Extension("Sp", {'671235', 'Bb'});
    if (result != "Sp.671235") {
        std::cout << "Error: expected output was not returned." << std::endl;
        return 1;
    }
    return 0;
}
```