#include <vector>
#include <string>
using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    int max_strength = -1;
    string strongest_extension;

    for (string extension : extensions) {
        int cap_letters = 0;
        int sm_letters = 0;

        for (char ch : extension) {
            if (isupper(ch)) {
                cap_letters++;
            } else if (islower(ch)) {
                sm_letters++;
            }
        }

        int strength = cap_letters - sm_letters;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}