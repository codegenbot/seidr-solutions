```cpp
#include <vector>
#include <string>
#include <cctype>
#include <iostream>

int main(){
    std::string class_name = "My";
    std::vector<std::string> extensions = {"Java", "Python", "C++"};
    std::cout << Strongest_Extension(class_name, extensions) << std::endl;
    assert (Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;

}

std::string Strongest_Extension(std::string class_name, const std::vector<std::string>& extensions){
    int max_strength = 0;
    std::string strongest_extension;

    for(const auto& extension : extensions){
        int cap = 0, sm = 0;
        for(char c : extension){
            if(std::isupper(c)) cap++;
            else if(std::islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > max_strength || (strength == max_strength && extension < strongest_extension)){
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}