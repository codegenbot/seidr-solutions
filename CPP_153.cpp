string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension;
    int strongest_strength = 0;

    for (const auto& extension : extensions) {
        int upper_case_count = 0;
        int lower_case_count = 0;

        for (char c : extension) {
            if (isupper(c))
                upper_case_count++;
            else if (islower(c))
                lower_case_count++;
        }

        int strength = upper_case_count - lower_case_count;

        if (strength > strongest_strength || (strength == strongest_strength && extensions[0] != extension)) {
            strongest_extension = extension;
            strongest_strength = strength;
        }
    }

    return class_name + "." + strongest_extension;
}