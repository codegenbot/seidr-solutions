int Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension;
    int strongest_strength = 0;

    for (string extension : extensions) {
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = count(extension.begin(), extension.end(), tolower);

        int strength = cap - sm;

        if (strength > strongest_strength) {
            strongest_extension = extension;
            strongest_strength = strength;
        }
    }

    return class_name + "." + strongest_extension;
}