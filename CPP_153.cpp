```cpp
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
            result = "";
            for (char c : extension) {
                result += c;
            }
        } else if (strength == strongest) {
            string temp = "";
            for (char c : extension) {
                temp += c;
            }
            if (temp < result) {
                result = temp;
            }
        }
    }
    return class_name + "." + result;
}