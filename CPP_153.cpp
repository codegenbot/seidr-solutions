string Strongest_Extension(string class_name, vector<string> extensions) {
    int maxStrength = INT_MIN;
    string strongestName;

    for (string ext : extensions) {
        int upperCount = 0, lowerCount = 0;
        for (char c : ext) {
            if (isupper(c)) {
                upperCount++;
            } else if (islower(c)) {
                lowerCount++;
            }
        }

        int strength = upperCount - lowerCount;
        if (strength > maxStrength) {
            maxStrength = strength;
            strongestName = ext;
        }
    }

    return class_name + "." + strongestName;
}