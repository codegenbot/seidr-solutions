string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;
    
    for (const string& ext : extensions) {
        int uppercase_count = 0, lowercase_count = 0;
        
        for (char c : ext) {
            if (isupper(c)) {
                uppercase_count++;
            } else if (islower(c)) {
                lowercase_count++;
            }
        }
        
        int strength = uppercase_count - lowercase_count;
        
        if (strength > max_strength || (strength == max_strength && strongest_extension.empty())) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    
    return class_name + "." + strongest_extension;
}