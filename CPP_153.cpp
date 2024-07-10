#include <vector>
#include <string>

using namespace std;

int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest_strength = 0;
    string strongest_extension;

    for(auto extension : extensions){
        int cap = 0;
        int sm = 0;
        for(char c : extension){
            if(isupper(c))
                cap++;
            else
                sm++;
        }
        int strength = cap - sm;
        
        if(strength > strongest_strength || (strength == strongest_strength && extension < strongest_extension)){
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}