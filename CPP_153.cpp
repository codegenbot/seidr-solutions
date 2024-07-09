int Strongest_Extension(string class_name, vector<string> extensions){
    int strongest_strength = 0;
    string strongest_extension;

    for (string extension : extensions) {
        int upper_case_count = 0;
        int lower_case_count = 0;

        for (char c : extension) {
            if (isupper(c))
                upper_case_count++;
            else
                lower_case_count++;
        }

        double strength = static_cast<double>(upper_case_count - lower_case_count);
        if (strength > strongest_strength) {
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}