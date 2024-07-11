int max_strength = INT_MIN;
    string strongest_extension;
    for (const string& ext : extensions) {
        int cap = 0, sm = 0;
        for (char c : ext) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > max_strength || (strength == max_strength && ext < strongest_extension)) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    return class_name + "." + strongest_extension;
}