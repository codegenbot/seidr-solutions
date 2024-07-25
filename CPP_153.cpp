#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
string Strongest_Extension(string class_name, vector<string> extensions) {
    string result = class_name;
    int max_strength = -1000;
    for (const auto& ext : extensions) {
        int CAP = 0, SM = 0;
        for (char c : ext) {
            if (isupper(c)) CAP++;
            else if (islower(c)) SM++;
        }
        int strength = CAP - SM;
        if (strength > max_strength || (strength == max_strength && ext < result.substr(result.find('.') + 1))) {
            result = class_name + "." + ext;
            max_strength = strength;
        }
    }
    return result;
}