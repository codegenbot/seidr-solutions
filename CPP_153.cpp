#include <string>
#include <vector>
#include <cctype>
#include <climits>
#include <cassert>

using namespace std;

std::string Strongest_Extension(const std::string& class_name, const std::vector<std::string>& extensions) {
    int max_strength = INT_MIN;
    string strongest_extension;
    for (const auto& extension : extensions) {
        int CAP = 0, SM = 0;
        for (char c : extension) {
            if (isupper(c)) CAP++;
            if (islower(c)) SM++;
        }
        int strength = CAP - SM;
        if (strength > max_strength || (strength == max_strength && extension < strongest_extension)) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}