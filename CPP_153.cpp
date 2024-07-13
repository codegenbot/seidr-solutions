```cpp
#include <vector>
#include <string>

int main() {
    string class_name;
    vector<string> extensions;
    // add your logic here to read input from user and store it in class_name and extensions variables
    int strongest = Strongest_Extension(class_name, extensions);
    return 0;
}

int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = 0;
    string strongest_extension;
    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(char c : extension){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > strongest || (strength == strongest && extension < strongest_extension)){
            strongest = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}