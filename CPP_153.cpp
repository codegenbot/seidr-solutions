#include <string>
#include <vector>

int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for(auto extension: extensions){
        int cap = 0, sm = 0;
        for(int i=0; i<extension.length(); i++){
            if(isupper(extension[i])) cap++;
            else if(islower(extension[i])) sm++;
        }
        int strength = cap - sm;
        
        if(strength > max_strength || (strength == max_strength && extension < strongest_extension)){
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}