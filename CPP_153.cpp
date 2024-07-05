#include <string>
#include <vector>
using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    auto get_strength = [](const string& ext) {
        int CAP = 0, SM = 0;
        for (char c : ext) {
            if (isupper(c)) CAP++;
            else if (islower(c)) SM++;
        }
        return CAP - SM;
    };

    string strongest_extension = extensions[0];
    int max_strength = get_strength(extensions[0]);

    for (const string& ext : extensions) {
        int strength = get_strength(ext);
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }

    return class_name + "." + strongest_extension;
}