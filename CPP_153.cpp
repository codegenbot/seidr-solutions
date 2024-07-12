#include <vector>
#include <string>

std::string Strongest_Extension(const std::vector<std::string>& extensions);

int main() {
    std::vector<std::string> extensions = {"671235", "Bb"};
    assert(Strongest_Extension(extensions) == "Sp.671235");
    return 0;
}

int Strongest_Extension(const std::vector<std::string>& extensions){
    int max_strength = 0;
    std::string strongest_extension;

    for(auto extension : extensions){
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

    return strongest_extension;
}