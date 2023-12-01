string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int strongest_strength = count(strongest_extension.begin(), strongest_extension.end(), '_') - count(strongest_extension.begin(), strongest_extension.end(), '-');

    for (int i = 1; i < extensions.size(); i++) {
        int strength = count(extensions[i].begin(), extensions[i].end(), '_') - count(extensions[i].begin(), extensions[i].end(), '-');
        if (strength > strongest_strength) {
            strongest_extension = extensions[i];
            strongest_strength = strength;
        }
    }

    return class_name + "." + strongest_extension;
}