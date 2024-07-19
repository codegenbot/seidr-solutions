#include <vector>
#include <cctype>
#include <iostream>
#include <cassert>
#include <string>

int Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

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

int main(){
    string class_name = "My";
    vector<string> extensions = {"Java", "Python", "C++"};
    cout << Strongest_Extension(class_name, extensions) << endl;

    assert (Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    
    return 0;
}