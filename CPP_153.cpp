int max_strength = INT_MIN;
    string strongest_extension;
    for (const auto& ext : extensions) {
        int cap_count = 0, sm_count = 0;
        for (char c : ext) {
            if (islower(c)) {
                sm_count++;
            } else if (isupper(c)) {
                cap_count++;
            }
        }
        int strength = cap_count - sm_count;
        if (strength > max_strength || (strength == max_strength && ext < strongest_extension)) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    return class_name + "." + strongest_extension;
}