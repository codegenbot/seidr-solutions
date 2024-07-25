string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int strongest_strength = 0;

    for (const auto& extension : extensions) {
        int cap = 0;
        int sm = 0;
        
        for (char c : extension) {
            if (isupper(c)) {
                cap++;
            } else if (islower(c)) {
                sm++;
            }
        }

        int strength = cap - sm;

        if (strength > strongest_strength || (strength == strongest_strength && extension < strongest_extension)) {
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}