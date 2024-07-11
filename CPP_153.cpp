int CAP(string s) {
    int count = 0;
    for (char c : s) {
        if (isupper(c)) {
            count++;
        }
    }
    return count;
}

int SM(string s) {
    int count = 0;
    for (char c : s) {
        if (islower(c)) {
            count++;
        }
    }
    return count;
}

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int strength = CAP(extensions[0]) - SM(extensions[0]);

    for (int i = 1; i < extensions.size(); i++) {
        int current_strength = CAP(extensions[i]) - SM(extensions[i]);
        if (current_strength > strength) {
            strongest_extension = extensions[i];
            strength = current_strength;
        }
    }

    return class_name + "." + strongest_extension;
}