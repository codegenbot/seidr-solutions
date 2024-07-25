int Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_ext = "";
    int strongest_strength = 0;

    for (const auto& ext : extensions) {
        int cap = 0;
        int sm = 0;
        for (char c : ext) {
            if (isupper(c))
                cap++;
            else
                sm++;
        }
        int strength = cap - sm;
        if (strength > strongest_strength || (strength == strongest_strength && extensions.size() - (int)distance(extensions.begin(), find(extensions.begin(), extensions.end(), ext)) >= 1)) {
            strongest_ext = ext;
            strongest_strength = strength;
        }
    }

    return class_name + "." + strongest_ext;
}