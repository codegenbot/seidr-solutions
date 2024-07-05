{
    string strongestExtension = "";
    int maxStrength = INT_MIN;

    for (const string& ext : extensions) {
        int CAP = 0, SM = 0;
        for (char c : ext) {
            if (isupper(c)) CAP++;
            else if (islower(c)) SM++;
        }
        int strength = CAP - SM;
        if (strength > maxStrength) {
            maxStrength = strength;
            strongestExtension = ext;
        }
    }

    return class_name + "." + strongestExtension;
}