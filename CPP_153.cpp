string strongest_extension = extensions[0];
    int max_strength = 0;
    for (const string& extension : extensions) {
        int CAP = 0, SM = 0;
        for (char c : extension) {
            if (isupper(c)) {
                CAP++;
            } else if (islower(c)) {
                SM++;
            }
        }
        int strength = CAP - SM;
        if (strength > max_strength || (strength == max_strength && extension < strongest_extension)) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;