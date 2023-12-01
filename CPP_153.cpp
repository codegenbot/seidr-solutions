string Strongest_Extension(string class_name, vector<string> extensions) {
    int max_strength = INT_MIN;
    string strongest_extension = "";
    
    for (string extension : extensions) {
        int cap = 0, sm = 0;
        for (char ch : extension) {
            if (isupper(ch))
                cap++;
            else if (islower(ch))
                sm++;
        }
        
        int strength = cap - sm;
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}