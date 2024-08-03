Here is the solution:

int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = -1;
    string result;
    for (const auto& extension : extensions) {
        int cap = 0, sm = 0;
        for (char c : extension) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        if (strength > strongest) {
            strongest = strength;
            result = class_name + "." + extension;
        } else if (strength == strongest) {
            result = class_name + "." + extension;
        }
    }
    return result;
}