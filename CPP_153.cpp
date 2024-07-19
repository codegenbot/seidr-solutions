int max_strength = INT_MIN;
    string strongest_extension = "";
    
    for (string extension : extensions) {
        int num_caps = 0, num_smalls = 0;
        for (char c : extension) {
            if (isupper(c)) {
                num_caps++;
            } else if (islower(c)) {
                num_smalls++;
            }
        }
        
        int strength = num_caps - num_smalls;
        if (strength > max_strength || (strength == max_strength && extension < strongest_extension)) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}