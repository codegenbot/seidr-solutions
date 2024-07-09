#include <iostream>
#include <vector>
#include <string>
#include <cctype>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    std::string strongest_extension = extensions[0];
    int max_strength = 0;
    
    for (const auto& extension : extensions) {
        int CAP = 0, SM = 0;
        for (char c : extension) {
            if (std::isupper(c)) {
                CAP++;
            } else if (std::islower(c)) {
                SM++;
            }
        }
        
        int strength = CAP - SM;
        if (strength > max_strength || (strength == max_strength && extension < strongest_extension)) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}

int main() {
    std::string result = Strongest_Extension("Sp", {"671235", "Bb"});
    std::cout << result << std::endl;
    
    return 0;
}