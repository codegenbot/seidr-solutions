#include <string>
#include <vector>
#include <cctype>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    std::string strongest_extension = extensions[0];
    int max_strength = 0;
    for(const auto& extension : extensions){
        int cap_count = 0, sm_count = 0;
        for(const auto& c : extension){
            if(std::isupper(c)) cap_count++;
            else if(std::islower(c)) sm_count++;
        }
        int strength = cap_count - sm_count;
        if(strength > max_strength || (strength == max_strength && extension < strongest_extension)){
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}