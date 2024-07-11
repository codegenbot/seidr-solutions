string strongestExtension = extensions[0];
    int maxStrength = countUpperCaseLetters(extensions[0]) - countLowerCaseLetters(extensions[0]);

    for (int i = 1; i < extensions.size(); i++) {
        int strength = countUpperCaseLetters(extensions[i]) - countLowerCaseLetters(extensions[i]);
        if (strength > maxStrength) {
            maxStrength = strength;
            strongestExtension = extensions[i];
        }
    }

    return class_name + "." + strongestExtension;
}