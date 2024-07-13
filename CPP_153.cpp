int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for (const auto &extension : extensions) {
        int upper_case_count = 0, lower_case_count = 0;
        for (char c : extension) {
            if (isupper(c))
                upper_case_count++;
            else
                lower_case_count++;
        }
        int strength = upper_case_count - lower_case_count;

        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}