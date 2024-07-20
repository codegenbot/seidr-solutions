int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for (string extension : extensions) {
        int strength = 0;
        int upper_count = 0;
        int lower_count = 0;

        for (char c : extension) {
            if (isupper(c)) {
                upper_count++;
            } else if (islower(c)) {
                lower_count++;
            }
        }

        strength = upper_count - lower_count;

        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        } else if (strength == max_strength) {
            if (find(extensions.begin(), extensions.end(), extension) < find(extensions.begin(), extensions.end(), strongest_extension)) {
                strongest_extension = extension;
            }
        }
    }

    return class_name + "." + strongest_extension;
}