#include <string>
#include <vector>
#include <cassert>
#include <algorithm>

std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions){
    int max_strength = INT_MIN;
    std::string strongest_extension = "";
    
    for(auto extension : extensions){
        int CAP = 0, SM = 0;
        for(auto ch : extension){
            if(isupper(ch))
                CAP++;
            else if(islower(ch))
                SM++;
        }
        
        int strength = CAP - SM;
        if(strength > max_strength || (strength == max_strength && extension < strongest_extension)){
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}

int main(){
    assert (Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    
    return 0;
}