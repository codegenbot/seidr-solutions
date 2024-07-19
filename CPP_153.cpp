string Strongest_Extension(string class_name,vector<string> extensions){
    if (extensions.empty()) return class_name + ".None";
    
    string strongest_extension = extensions[0];
    int max_strength = 0;
    
    for (const auto& ext : extensions) {
        int CAP = 0, SM = 0;
        for (char c : ext) {
            if (isupper(c)) CAP++;
            else if (islower(c)) SM++;
        }
        
        int strength = CAP - SM;
        
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    
    return class_name + "." + strongest_extension;
}