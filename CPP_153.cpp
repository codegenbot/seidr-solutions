int count_uppercase_letters(const string& str) {
    int count = 0;
    for(char c : str) {
        if(isupper(c)) {
            count++;
        }
    }
    return count;
}

int count_lowercase_letters(const string& str) {
    int count = 0;
    for(char c : str) {
        if(islower(c)) {
            count++;
        }
    }
    return count;
}

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = "";
    int max_strength = INT_MIN;
    
    for(const string& extension : extensions) {
        int cap_letters = count_uppercase_letters(extension);
        int sm_letters = count_lowercase_letters(extension);
        
        int strength = cap_letters - sm_letters;
        
        if(strength > max_strength || (strength == max_strength && strongest_extension.empty())) {
            strongest_extension = extension;
            max_strength = strength;
        }
    }
    
    return class_name + "." + strongest_extension;
}