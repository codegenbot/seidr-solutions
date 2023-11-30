string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;
    
    for (string extension : extensions) {
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
        
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}