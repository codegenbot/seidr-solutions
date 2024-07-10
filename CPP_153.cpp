int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for (string extension : extensions) {
        int upper_case = 0;
        int lower_case = 0;
        
        for (char c : extension) {
            if (isupper(c)) upper_case++;
            else if (islower(c)) lower_case++;
        }
        
        double strength = static_cast<double>(upper_case - lower_case);
        
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extension;
        } else if (strength == max_strength) {
            if (extension < strongest_extension)
                strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}