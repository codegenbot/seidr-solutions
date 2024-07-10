std::string Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    if (class_name.empty() || extensions.empty()) return "";

    std::string strongest_extension = "";
    int max_strength = INT_MIN;

    for (const std::string& ext : extensions) {
        int cap_count = 0, sm_count = 0;
        bool valid_extension = true;
        for (char c : ext) {
            if (!isalpha(c)) {
                valid_extension = false;
                break;
            }
            if (isupper(c)) {
                cap_count++;
            } else {
                sm_count++;
            }
        }

        if (valid_extension) {
            int strength = cap_count - sm_count;
            if (strength > max_strength) {
                max_strength = strength;
                strongest_extension = ext;
            } else if (strength == max_strength && ext.size() < strongest_extension.size()) {
                strongest_extension = ext;
            }
        }
    }

    return class_name + "." + strongest_extension;
}