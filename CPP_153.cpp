int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest_strength = 0;
    string strongest_extension;

    for (const auto& extension : extensions) {
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = count(extension.begin(), extension.end(), tolower);
        double strength = static_cast<double>(cap - sm);

        if (strength > strongest_strength) {
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}