```cpp
#include <vector>
#include <string>

int Strongest_Extension(string class_name, vector<string> extensions){
    int strongest = -1;
    string result;
    for(auto ext:extensions){
        int cap = 0, sm = 0;
        for(char c:ext){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > strongest){
            strongest = strength;
            result = ext;
        }else if(strength == strongest) result = ext;
    }
    return class_name + "." + result;
}