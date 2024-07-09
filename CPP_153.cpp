string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int strongest_strength = 0;
    
    for (const auto& extension : extensions) {
        int cap_count = 0;
        int sm_count = 0;
        
        for (char c : extension) {
            if (isupper(c)) {
                cap_count++;
            } else if (islower(c)) {
                sm_count++;
            }
        }
        
        int strength = cap_count - sm_count;
        
        if (strength > strongest_strength || (strength == strongest_strength && extension < strongest_extension)) {
            strongest_extension = extension;
            strongest_strength = strength;
        }
    }
    
    return class_name + "." + strongest_extension;
}