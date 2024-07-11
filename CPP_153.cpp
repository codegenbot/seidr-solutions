int CAP(const string& str) {
    int count = 0;
    for (char c : str) {
        if (isupper(c)) {
            count++;
        }
    }
    return count;
}

int SM(const string& str) {
    int count = 0;
    for (char c : str) {
        if (islower(c)) {
            count++;
        }
    }
    return count;
}

string Strongest_Extension(string class_name, vector<string> extensions) {
    pair<int, string> strongest = {-1, ""};
    
    for (string ext : extensions) {
        int strength = CAP(ext) - SM(ext);
        if (strength > strongest.first || (strength == strongest.first && ext < strongest.second)) {
            strongest = {strength, ext};
        }
    }
    
    return class_name + "." + strongest.second;
}