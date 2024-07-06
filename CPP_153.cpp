string Strongest_Extension(string class_name,vector<string> extensions){
    string strongest = "";
    int max_strength = -1000;
    for (const auto& ext : extensions) {
        int cap = 0, sm = 0;
        for (char c : ext) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > max_strength) {
            strongest = ext;
            max_strength = strength;
        } else if (strength == max_strength) {
            strongest = ext;
        }
    }
    return class_name + "." + strongest;
}