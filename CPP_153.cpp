#include <algorithm>

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;

    for (const string& extension : extensions) {
        int cap_count = count_if(extension.begin(), extension.end(), [](char c) { return isupper(c); });
        int sm_count = count_if(extension.begin(), extension.end(), [](char c) { return islower(c); });
        int strength = cap_count - sm_count;

        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}