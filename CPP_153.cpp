#include <vector>
#include <string>

int Strongest_Extension(string class_name, vector<vector<char>> extensions) {
    int strongest = -1;
    string result = "";
    for (vector<char> extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > strongest) {
            strongest = strength;
            result = string(1, c);
        } else if (strength == strongest) {
            for (char d : extension) {
                if (!result.empty() && !string(1, d).compare(0, 1, result, 0, 1)) continue;
                if (isupper(d)) {
                    string temp = result + char(d);
                    if (!temp.compare(class_name + "." + temp)) {
                        result = temp;
                        break;
                    }
                } else {
                    result += d;
                }
            }
        }
    }
    return class_name + "." + result;
}