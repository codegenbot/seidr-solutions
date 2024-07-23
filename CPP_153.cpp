string result = class_name + ".";
    int max_strength = INT_MIN;
    string strongest_extension = "";

    for (const auto& ext : extensions) {
        int cap_letters = 0;
        int small_letters = 0;
        for (char c : ext) {
            if (isupper(c)) {
                cap_letters++;
            } else if (islower(c)) {
                small_letters++;
            }
        }

        int strength = cap_letters - small_letters;
        if (strength > max_strength || (strength == max_strength && ext < strongest_extension)) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }

    result += strongest_extension;
    return result;
}