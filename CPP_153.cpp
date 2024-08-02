#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_strength = INT_MIN;
    std::string strongest_extension = "";

    for(const auto& ext : extensions){
        int CAP = 0, SM = 0;
        for(const auto& c : ext){
            if(std::isupper(c)) CAP++;
            if(std::islower(c)) SM++;
        }
        int strength = CAP - SM;
        if(strength > max_strength || (strength == max_strength && ext < strongest_extension)){
            max_strength = strength;
            strongest_extension = ext;
        }
    }

    return class_name + "." + strongest_extension;
}

int main() {
    std::string class_name = "ClassA";
    std::vector<std::string> extensions = {"extA", "extB", "extC", "eXtD"};

    std::string result = Strongest_Extension(class_name, extensions);
    std::cout << result << std::endl;

    return 0;
}