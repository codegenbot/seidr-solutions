int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = 0;
    string strongest_extension;
    for (const auto& extension : extensions) {
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = count(extension.begin(), extension.end(), tolower);
        int strength = cap - sm;
        if (strength > strongest) {
            strongest = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}