```cpp
#include <vector>
#include <string>

int main() {
    int result = Strongest_Extension("Sp", {"671235", "Bb"});
    assert(result == "Sp.671235");
    return 0;
}

int Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;
    
    for(auto extension : extensions){
        int cap = 0;
        int sm = 0;
        
        for(char c : extension){
            if(isupper(c))
                cap++;
            else if(islower(c))
                sm++;
        }
        
        int strength = cap - sm;
        
        if(strength > max_strength || (strength == max_strength && extension < strongest_extension)){
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}