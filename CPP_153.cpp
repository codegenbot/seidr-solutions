int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = -1;
    string best_extension;

    for (string extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        if (cap - sm > strongest) {
            strongest = cap - sm;
            best_extension = extension;
        }
    }

    return class_name + "." + best_extension;
}