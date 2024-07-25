#include <iostream>
#include <string>
#include <vector>

// Declare the function here
int Strongest_Extension(std::string class_name, std::vector<std::string> extensions);

int main() {
    // Call the function with test cases
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    
    return 0;
}