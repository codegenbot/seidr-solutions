string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int strongest_strength = countUpperCase(extensions[0]) - countLowerCase(extensions[0]);

    for (int i = 1; i < extensions.size(); i++) {
        int strength = countUpperCase(extensions[i]) - countLowerCase(extensions[i]);
        if (strength > strongest_strength) {
            strongest_extension = extensions[i];
            strongest_strength = strength;
        }
    }

    return class_name + "." + strongest_extension;
}

int countUpperCase(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            count++;
        }
    }
    return count;
}

int countLowerCase(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            count++;
        }
    }
    return count;
}