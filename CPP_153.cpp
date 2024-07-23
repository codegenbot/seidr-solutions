#include <vector>
#include <string>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;
    for(auto extension : extensions){
        int strength = 0;
        for(char c : extension){
            if(isupper(c)) strength++;
            else strength--;
        }
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extension;
        } else if (strength == max_strength && !strongest_extension.empty()) { 
            strongest_extension += ", " + extension;
        }
    }
    if (max_strength > 0) {
        return class_name + "." + strongest_extension;
    } else {
        return class_name;
    }
}