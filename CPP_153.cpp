Here is the completed code:

int Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_ext = "";
    int max_strength = -1;
    
    for (string ext : extensions) {
        int cap = 0, sm = 0;
        for (char c : ext) {
            if (isupper(c)) cap++;
            else if (islower(c)) sm++;
        }
        int strength = cap - sm;
        
        if (strength > max_strength) {
            max_strength = strength;
            strongest_ext = ext;
        } else if (strength == max_strength && ext < strongest_ext) {
            strongest_ext = ext;
        }
    }
    
    return class_name + "." + strongest_ext;
}