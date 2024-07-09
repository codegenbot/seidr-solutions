#include <vector>
#include <string>
using namespace std;

std::string Strongest_Extension(string class_name,vector<string> extensions){
    string strongest = "";
    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(char c : extension){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > 0 || (strength == 0 && strongest.empty())){
            strongest = extension;
        }else if(strength == 0){
            strongest = max(strongest, extension);
        }
    }
    return class_name + "." + strongest;
}