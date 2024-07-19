#ifndef STRONGEST_EXTENSION_H
#define STRONGEST_EXTENSION_H

#include <vector>
#include <string>

int Strongest_Extension(std::string class_name, std::vector<std::string> extensions);

#endif  // STRONGEST_EXTENSION_H

// strongest_extension.cpp
#include "strongest_extension.h"
#include <cctype>
#include <iostream>
#include <cassert>
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

    return class_name + "." + strongest_extension;
}

// main.cpp
#include "strongest_extension.h"
#include <iostream>
#include <vector>

int main(){
    std::string class_name = "My";
    std::vector<std::string> extensions;
    extensions.push_back("Java");
    extensions.push_back("Python");
    extensions.push_back("C++");
    std::cout << Strongest_Extension(class_name, extensions) << std::endl;

    assert (Strongest_Extension("Sp", {"671235", "Bb"}) == std::string("Sp.671235"));

    return 0;
}