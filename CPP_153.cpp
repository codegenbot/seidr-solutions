int Strongest_Extension(string class_name, vector<string> extensions) {
    int strongest_strength = 0;
    string strongest_extension;

    for (string extension : extensions) {
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = extension.size() - cap;
        double strength = static_cast<double>(cap) - sm;

        if (strength > strongest_strength) {
            strongest_strength = static_cast<int>(strength);
            strongest_extension = extension;
        }
    }

    return string(class_name + "." + strongest_extension);
}