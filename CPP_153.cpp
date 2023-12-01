#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int max_strength = count_if(strongest_extension.begin(), strongest_extension.end(), isupper) - count_if(strongest_extension.begin(), strongest_extension.end(), islower);
    
    for (int i = 1; i < extensions.size(); i++) {
        int strength = count_if(extensions[i].begin(), extensions[i].end(), isupper) - count_if(extensions[i].begin(), extensions[i].end(), islower);
        if (strength > max_strength) {
            strongest_extension = extensions[i];
            max_strength = strength;
        }
    }
    
    return class_name + "." + strongest_extension;
}