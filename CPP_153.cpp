string Strongest_Extension(string class_name, vector<string> extensions){
    int strongest_strength = INT_MIN;
    string strongest_extension = "";
    for (const auto& extension : extensions) {
        int CAP = 0, SM = 0;
        for (char c : extension) {
            if (isupper(c)) CAP++;
            if (islower(c)) SM++;
        }
        int strength = CAP - SM;
        if (strength > strongest_strength || (strength == strongest_strength && extension < strongest_extension)) {
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}