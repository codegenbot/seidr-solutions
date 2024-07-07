string Strongest_Extension(string class_name, vector<string> extensions) {
    int strongest = -1;
    string result = "";
    for (const auto& extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) {
                cap++;
            } else if (islower(c)) {
                sm++;
            }
        }
        if (cap - sm > strongest) {
            strongest = cap - sm;
            result = extension;
        } else if (cap - sm == strongest && extension < result) {
            result = extension;
        }
    }
    return class_name + "." + result;
}