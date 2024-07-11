int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = -INT_MAX;
    string strongest_ext = "";

    for (const auto& ext : extensions) {
        int cap = 0, sm = 0;
        for (char c : ext) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;

        if (strength > max_strength) {
            max_strength = strength;
            strongest_ext = ext;
        }
    }

    return class_name + "." + strongest_ext;
}