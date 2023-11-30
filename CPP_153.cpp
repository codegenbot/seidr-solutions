string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int strongest_strength = count_uppercase(strongest_extension) - count_lowercase(strongest_extension);

    for (int i = 1; i < extensions.size(); i++) {
        int current_strength = count_uppercase(extensions[i]) - count_lowercase(extensions[i]);
        if (current_strength > strongest_strength) {
            strongest_extension = extensions[i];
            strongest_strength = current_strength;
        }
    }

    return class_name + "." + strongest_extension;
}