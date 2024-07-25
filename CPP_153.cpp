string strongestExtension = "";
    int maxStrength = INT_MIN;

    for (const auto &ext : extensions) {
        int strength = 0;
        for (char c : ext) {
            if (isupper(c)) {
                strength++;
            } else if (islower(c)) {
                strength--;
            }
        }

        if (strength > maxStrength || (strength == maxStrength && ext < strongestExtension)) {
            maxStrength = strength;
            strongestExtension = ext;
        }
    }

    return class_name + "." + strongestExtension;
}