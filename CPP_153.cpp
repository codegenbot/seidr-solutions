string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int max_strength = count_if(strongest_extension.begin(), strongest_extension.end(), ::isupper) - count_if(strongest_extension.begin(), strongest_extension.end(), ::islower);

    for (const string& ext : extensions) {
        int strength = count_if(ext.begin(), ext.end(), ::isupper) - count_if(ext.begin(), ext.end(), ::islower);
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }

    return class_name + "." + strongest_extension;
}