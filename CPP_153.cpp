string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_ext = "";
    int max_strength = INT_MIN;

    for (string ext : extensions) {
        int CAP = 0, SM = 0;
        for (char c : ext) {
            if (isupper(c)) CAP++;
            else if (islower(c)) SM++;
        }
        int strength = CAP - SM;
        if (strength > max_strength || (strength == max_strength && ext < strongest_ext)) {
            strongest_ext = ext;
            max_strength = strength;
        }
    }

    return class_name + "." + strongest_ext;
}