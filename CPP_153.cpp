#include <iostream>
#include <vector>
#include <string>

int Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for(auto extension : extensions){
        string strong_ext;
        for(auto c : extension){
            if(isupper(c)) strong_ext += to_string(c);
            else if(islower(c)) strong_ext += to_string(c);
        }
        int strength = strong_ext.length() - (int)strong_ext.convert_to_lower().length();
        if(strength > max_strength || (strength == max_strength && extension.compare(0, extension.size(), strongest_extension) < 0)){
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}