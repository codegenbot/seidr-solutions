```cpp
#include <string>
#include <vector>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_strength = 0;
    std::string strongest_extension;

    for(auto extension: extensions){
        int cap = 0, sm = 0;
        for(int i=0; i<extension.length(); i++){
            if(std::isupper(extension[i])) cap++;
            else if(std::islower(extension[i])) sm++;
        }
        int strength = cap - sm;
        
        if(strength > max_strength || (strength == max_strength && extension < strongest_extension)){
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}