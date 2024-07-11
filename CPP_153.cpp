#include <vector>
#include <string>

int Strongest_Extension(string class_name, vector<vector<char>> extensions) {
    int strongest = -1;
    string result = "";
    for (auto extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > strongest) {
            strongest = strength;
            result = "";
            for (auto ch : extension) {
                result += ch;
            }
        } else if (strength == strongest) {
            string temp = "";
            for (auto ch : extension) {
                temp += ch;
            }
            result = min(result, temp);
        }
    }
    return class_name + "." + result;
}