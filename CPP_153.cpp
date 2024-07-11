string Strongest_Extension(string class_name, vector<string> extensions) {
    string result;
    int max_strength = INT_MIN;
    
    for (const string& ext : extensions) {
        int cap_count = 0, sm_count = 0;
        for (char c : ext) {
            if (isupper(c)) {
                cap_count++;
            } else if (islower(c)) {
                sm_count++;
            }
        }
        
        int strength = cap_count - sm_count;
        if (strength > max_strength || (strength == max_strength && ext < result.substr(class_name.size() + 1))) {
            max_strength = strength;
            result = class_name + "." + ext;
        }
    }
    
    return result;
}