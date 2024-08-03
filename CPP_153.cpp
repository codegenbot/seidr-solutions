int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = 0;
    string res = "";
    for (string s : extensions) {
        int cap = 0, sm = 0;
        for (char c : s) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        if (cap - sm > strongest) {
            strongest = cap - sm;
            res = s;
        } else if (cap - sm == strongest) {
            res = s;
        }
    }
    return class_name + "." + res;
}