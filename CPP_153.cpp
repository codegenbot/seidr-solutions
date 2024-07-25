int Strongest_Extension(string class_name, vector<string> extensions){
    int strongest = 0;
    string strongest_extension;

    for (string extension : extensions) {
        int cap = count_if(extension.begin(), extension.end(), ::isupper);
        int sm = extension.size() - cap;
        if ((cap - sm) > strongest) {
            strongest = cap - sm;
            strongest_extension = extension;
        }
    }

    return strongest_extension + "." + class_name;
}