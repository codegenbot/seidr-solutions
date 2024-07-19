int strongest_strength = -999;
    string strongest_extension;
    
    for (const string& extension : extensions) {
        int cap_count = 0, sm_count = 0;
        for (char c : extension) {
            if (islower(c)) {
                sm_count++;
            } else if (isupper(c)) {
                cap_count++;
            }
        }
        
        int strength = cap_count - sm_count;
        
        if (strength > strongest_strength || (strength == strongest_strength && extension < strongest_extension)) {
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}