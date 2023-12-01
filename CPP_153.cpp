#include <algorithm>

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int max_strength = count(strongest_extension.begin(), strongest_extension.end(), '_') - count(strongest_extension.begin(), strongest_extension.end(), '.');

    for (int i = 1; i < extensions.size(); i++) {
        int strength = count(extensions[i].begin(), extensions[i].end(), '_') - count(extensions[i].begin(), extensions[i].end(), '.');
        if (strength > max_strength) {
            strongest_extension = extensions[i];
            max_strength = strength;
        }
    }

    return class_name + "." + strongest_extension;
}