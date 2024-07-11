int count_uppercase_letters(string str) {
    int count = 0;
    for (char c : str) {
        if (isupper(c)) {
            count++;
        }
    }
    return count;
}

int count_lowercase_letters(string str) {
    int count = 0;
    for (char c : str) {
        if (islower(c)) {
            count++;
        }
    }
    return count;
}

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;

    for (string ext : extensions) {
        int strength = count_uppercase_letters(ext) - count_lowercase_letters(ext);
        if (strength > max_strength || (strength == max_strength && ext < strongest_extension)) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }

    return class_name + "." + strongest_extension;
}