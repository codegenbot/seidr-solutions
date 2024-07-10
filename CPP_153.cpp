#include <iostream>
#include <vector>
#include <string>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int strongest = -1;
    std::string strongest_extension;

    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(int i = 0; i < extension.length(); i++){
            if(isupper(extension[i])) cap++;
            else if(islower(extension[i])) sm++;
        }
        if(cap - sm > strongest){
            strongest = cap - sm;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}