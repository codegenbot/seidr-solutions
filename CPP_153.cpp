#include <string>
#include <vector>

int Strongest_Extension(string class_name, string extension){
    int max_strength = 0;
    string strongest_extension;

    for(int i=0; i<1; ++i){ 
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
    assert(Strongest_Extension("Sp", "671235") == "Sp.671235");
    return 0;
}