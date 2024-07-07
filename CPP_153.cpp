int Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;
    
    for (const auto& extension : extensions) {
        int upper_count = 0;
        int lower_count = 0;
        
        for (char c : extension) {
            if (isupper(c)) {
                upper_count++;
            } else if (islower(c)) {
                lower_count++;
            }
        }
        
        double strength = static_cast<double>(upper_count) - lower_count;
        
        if (strength > max_strength || (strength == max_strength && strongest_extension.empty())) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}