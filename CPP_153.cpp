string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int strongest_strength = count(strongest_extension.begin(), strongest_extension.end(), toupper(strongest_extension[0])) - count(strongest_extension.begin(), strongest_extension.end(), tolower(strongest_extension[0]));

    for (int i = 1; i < extensions.size(); i++) {
        string extension = extensions[i];
        int strength = count(extension.begin(), extension.end(), toupper(extension[0])) - count(extension.begin(), extension.end(), tolower(extension[0]));

        if (strength > strongest_strength) {
            strongest_extension = extension;
            strongest_strength = strength;
        }
    }

    return class_name + "." + strongest_extension;
}