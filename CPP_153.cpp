#include <string>
#include <vector>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int max_strength = count(strongest_extension.begin(), strongest_extension.end(), toupper(strongest_extension[0])) -
                       count(strongest_extension.begin(), strongest_extension.end(), tolower(strongest_extension[0]));

    for (int i = 1; i < extensions.size(); i++) {
        string current_extension = extensions[i];
        int current_strength = count(current_extension.begin(), current_extension.end(), toupper(current_extension[0])) -
                               count(current_extension.begin(), current_extension.end(), tolower(current_extension[0]));

        if (current_strength > max_strength) {
            max_strength = current_strength;
            strongest_extension = current_extension;
        }
    }

    return class_name + "." + strongest_extension;
}