string Strongest_Extension(string class_name, vector<string> extensions){
    string result = "";
    int max_strength = INT_MIN;
    
    for (const auto& extension : extensions) {
        int cap_count = 0, sm_count = 0;
        for (char ch : extension) {
            if (isupper(ch)) {
                cap_count++;
            } else if (islower(ch)) {
                sm_count++;
            }
        }

        int strength = cap_count - sm_count;
        if (strength > max_strength || (strength == max_strength && result.empty())) {
            result = extension;
            max_strength = strength;
        }
    }

    return class_name + "." + result;
}