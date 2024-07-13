string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = 0;
    
    for (const auto& extension : extensions) {
        int cap = 0, sm = 0;
        
        for (char c : extension) {
            if (isupper(c))
                cap++;
            else
                sm++;
        }
        
        int strength = cap - sm;
        
        if (strength > max_strength || (strength == max_strength && strongest_extension < extension)) {
            strongest_extension = extension;
            max_strength = strength;
        }
    }
    
    return class_name + "." + strongest_extension;
}