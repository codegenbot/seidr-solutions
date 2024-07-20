string Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = count(extension.begin(), extension.end(), tolower) - cap;
        if (sm < 0)
            sm = -sm; // Convert negative strength to positive
        if (sm > max_strength) {
            max_strength = sm;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}