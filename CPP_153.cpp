#include <iostream>
#include <vector>
#include <string>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_strength = 0;
    std::string strongest_extension;

    for(auto extension : extensions){
        int strength = 0;
        bool is_upper = false;
        for(auto c : extension){
            if(std::isupper(c)) {
                is_upper = true;
                strength++;
            }
        }
        if(strength > max_strength || (strength == max_strength && (!is_upper || extension.compare(0, extension.size(), strongest_extension) < 0))){
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}