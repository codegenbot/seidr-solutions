string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = 0;
    for (const auto& extension : extensions) {
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = extension.size() - cap;
        if (cap - sm > max_strength) {
            max_strength = cap - sm;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}