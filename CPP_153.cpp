string strongestExtension = "";
    int maxStrength = INT_MIN;

    for (const auto& extension : extensions) {
        int CAP = 0, SM = 0;
        for (char c : extension) {
            if (isupper(c)) CAP++;
            else if (islower(c)) SM++;
        }
        int strength = CAP - SM;
        
        if (strength > maxStrength || (strength == maxStrength && extension < strongestExtension)) {
            maxStrength = strength;
            strongestExtension = extension;
        }
    }

    return class_name + "." + strongestExtension;
}