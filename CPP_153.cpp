string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int strongest_strength = countUpperCase(strongest_extension) - countLowerCase(strongest_extension);

    for (int i = 1; i < extensions.size(); i++) {
        int strength = countUpperCase(extensions[i]) - countLowerCase(extensions[i]);
        if (strength > strongest_strength) {
            strongest_extension = extensions[i];
            strongest_strength = strength;
        }
    }

    return class_name + "." + strongest_extension;
}