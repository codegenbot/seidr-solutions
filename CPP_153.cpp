#include <iostream>
#include <vector>
#include <string>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions);

int main() {
    assert (Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
}

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_strength = 0;
    std::string strongest_extension;

    for(auto extension : extensions){
        std::string strong_ext;
        for(auto c : extension){
            if(isupper(c)) strong_ext += to_string(c);
            else if(islower(c)) strong_ext += to_string(c);
        }
        int strength = strong_ext.length() - (int)strong_ext.convert_to_lower().length();
        if(strength > max_strength || (strength == max_strength && extension.compare(0, extension.size(), strongest_extension) < 0)){
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}