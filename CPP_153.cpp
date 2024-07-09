string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = 0;
    
    for (const auto& extension : extensions) {
        int uppercase_letters = 0, lowercase_letters = 0;
        
        for (char c : extension) {
            if (isupper(c)) uppercase_letters++;
            else if (islower(c)) lowercase_letters++;
        }
        
        double strength = (double)(uppercase_letters - lowercase_letters);
        
        if (strength > max_strength || (strength == max_strength && strongest_extension.empty())) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}