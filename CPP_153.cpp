#include <vector>
#include <string>

std::string Strongest_Extension(const std::vector<std::pair<std::string, std::string>>& extensions);

int run() {
    std::vector<std::pair<std::string, std::string>> extensions = {{"Sp", "671235"}, {"Bb"}};
    assert(Strongest_Extension(extensions) == "Sp.671235");
    return 0;
}

std::string Strongest_Extension(const std::vector<std::pair<std::string, std::string>>& extensions){
    int max_strength = 0;
    std::string strongest_extension;

    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(char c : extension.first){
            if(std::isupper(c)) cap++;
            else if(std::islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > max_strength || (strength == max_strength && extension.first < strongest_extension)){
            max_strength = strength;
            strongest_extension = extension.first + "." + extension.second;
        }
    }

    return strongest_extension;
}