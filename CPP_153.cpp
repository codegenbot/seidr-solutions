string Strongest_Extension(string class_name, vector<string> extensions){
    string strongest_extension = "";
    int max_strength = INT_MIN;
    
    for (const auto& extension : extensions) {
        int cap_letters = 0, small_letters = 0;
        for (char c : extension) {
            if (isupper(c)) {
                cap_letters++;
            } else if (islower(c)) {
                small_letters++;
            }
        }
        int strength = cap_letters - small_letters;
        if (strength > max_strength || (strength == max_strength && extension < strongest_extension)) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}