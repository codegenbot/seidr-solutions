int Strongness(const string& extension) {
    int cap = 0, sm = 0;
    for (char c : extension) {
        if (isupper(c))
            cap++;
        else if (islower(c))
            sm++;
    }
    return cap - sm;
}

string Strongest_Extension(string class_name, vector<string> extensions) {
    int strongest = INT_MIN;
    string strongest_extension;

    for (const auto& extension : extensions) {
        int strength = Strongness(extension);
        if (strength > strongest) {
            strongest = strength;
            strongest_extension = extension;
        } else if (strength == strongest)
            strongest_extension = extension;
    }

    return class_name + "." + strongest_extension;
}