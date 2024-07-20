#include <string>
#include <vector>
#include <cctype>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    std::string strongest_extension = "";
    int max_strength = 0;
    
    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(char c : extension){
            if(std::isupper(c)) cap++;
            else if(std::islower(c)) sm++;
        }
        int strength = cap - sm;
        
        if(strength > max_strength || (strength == max_strength && strongest_extension.empty())){
            strongest_extension = extension;
            max_strength = strength;
        }
    }
    
    return class_name + "." + strongest_extension;
}