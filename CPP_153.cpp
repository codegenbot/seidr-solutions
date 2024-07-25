string strongestExtension = "";
    int maxStrength = INT_MIN;
    for (const auto &ext : extensions) {
        int CAP = 0, SM = 0;
        for (char c : ext) {
            if (isupper(c)) {
                CAP++;
            } else if (islower(c)) {
                SM++;
            }
        }
        int strength = CAP - SM;
        if (strength > maxStrength || (strength == maxStrength && ext < strongestExtension)) {
            maxStrength = strength;
            strongestExtension = ext;
        }
    }
    return class_name + "." + strongestExtension;
}