int max_strength = -1000000;
    string strongest_extension = "";
    for (string ext : extensions) {
        int CAP = 0, SM = 0;
        for (char c : ext) {
            if (isupper(c)) CAP++;
            if (islower(c)) SM++;
        }
        int strength = CAP - SM;
        if (strength > max_strength || (strength == max_strength && ext < strongest_extension)) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    return class_name + "." + strongest_extension;
}