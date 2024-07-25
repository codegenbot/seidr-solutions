int Strongest_Extension(string class_name,vector<string> extensions){
    string strongest = "";
    int max_strength = 0;
    for (string ext : extensions) {
        int cap = 0;
        int sm = 0;
        for (char c : ext) {
            if (isupper(c)) {
                cap++;
            } else if (islower(c)) {
                sm++;
            }
        }
        int strength = cap - sm;
        if (strength > max_strength || (strength == max_strength && strongest.empty())) {
            strongest = ext;
            max_strength = strength;
        }
    }
    return class_name + "." + strongest;
}