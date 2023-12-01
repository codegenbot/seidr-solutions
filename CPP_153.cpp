#include <iostream>
#include <vector>
#include <string>
using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int max_strength = countUpperCase(strongest_extension) - countLowerCase(strongest_extension);

    for (int i = 1; i < extensions.size(); i++) {
        int strength = countUpperCase(extensions[i]) - countLowerCase(extensions[i]);
        if (strength > max_strength) {
            strongest_extension = extensions[i];
            max_strength = strength;
        }
    }

    return class_name + "." + strongest_extension;
}

int countUpperCase(string str) {
    int count = 0;
    for (char c : str) {
        if (isupper(c)) {
            count++;
        }
    }
    return count;
}

int countLowerCase(string str) {
    int count = 0;
    for (char c : str) {
        if (islower(c)) {
            count++;
        }
    }
    return count;
}