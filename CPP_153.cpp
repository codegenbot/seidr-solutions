string Strongest_Extension(string class_name, vector<string> extensions){
    int strongest_strength = -1;
    string strongest_extension;

    for (const auto &extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) {
                cap++;
            } else if (islower(c)) {
                sm++;
            }
        }
        string strength_str = to_string(cap - sm);
        if (strength_str == "1") {
            strongest_extension = extension;
            strongest_strength = 1;
            break;
        } else if (strength_str.compare(strength_str) > 0) {
            strongest_extension = extension;
            strongest_strength = stoi(strength_str);
        }
    }

    return class_name + "." + strongest_extension;
}