int Strongest_Extension(string class_name,vector<string> extensions){
    string strongest = "";
    int max_strength = 0;
    
    for (string extension : extensions) {
        int cap = 0;
        int sm = 0;
        
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        
        int strength = cap - sm;
        
        if (strength > max_strength || (strength == max_strength && strongest.empty())) {
            max_strength = strength;
            strongest = extension;
        }
    }
    
    return class_name + "." + strongest;
}