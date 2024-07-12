#include <iostream>
#include <vector>
#include <cctype>
#include <string>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_strength = 0;
    std::string strongest_extension;

    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(char c : extension){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > max_strength || (strength == max_strength && extension < strongest_extension)){
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return max_strength;
}

int main(){
    std::cout << Strongest_Extension("Sp", {"671235", "Bb"}) << std::endl;
}