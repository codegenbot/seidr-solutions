#include <string>
#include <vector>
#include <cctype>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_strength = 0;
    std::string strongest_extension = "";
    
    for(auto extension : extensions){
        int strength = 0;
        for(char c : extension){
            if(isupper(c)) strength++;
            else if(!isalnum(c)) strength--;
        }
        
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}