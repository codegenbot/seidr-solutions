#include <vector>
#include <string>

int Strongest_Extension(const std::vector<std::string>& extensions);

int run() {
    std::vector<std::string> extensions = {"671235", "Bb"};
    int result = Strongest_Extension(extensions);
    return result;
}

int Strongest_Extension(const std::vector<std::string>& extensions){
    int max_strength = 0;
    int strongest_extension_index;

    for(int i = 0; i < extensions.size(); i++){
        int cap = 0, sm = 0;
        for(char c : extensions[i]){
            if(std::isupper(c)) cap++;
            else if(std::islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > max_strength || (strength == max_strength && i < strongest_extension_index)){
            max_strength = strength;
            strongest_extension_index = i;
        }
    }

    return strongest_extension_index;
}