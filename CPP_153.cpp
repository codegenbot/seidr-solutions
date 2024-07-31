string strongestExtensionName = "";
    int maxStrength = INT_MIN;
    
    for (const auto& ext : extensions) {
        int cap = 0, sm = 0;
        for (char c : ext) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        
        int strength = cap - sm;
        
        if (strength > maxStrength || (strength == maxStrength && ext < strongestExtensionName)) {
            maxStrength = strength;
            strongestExtensionName = ext;
        }
    }
    
    return class_name + "." + strongestExtensionName;
}