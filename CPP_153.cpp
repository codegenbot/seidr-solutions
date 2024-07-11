Here is the solution:

```cpp
string Strongest_Extension(string class_name,vector<string> extensions){
    string strongest_extension = "";
    int strongest_strength = 0;
    
    for(auto& extension : extensions) {
        int cap = 0, sm = 0;
        for(auto c: extension) {
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        
        if(strength > strongest_strength || (strength == strongest_strength && extension < strongest_extension)) {
            strongest_extension = extension;
            strongest_strength = strength;
        }
    }
    
    return class_name + "." + strongest_extension;
}