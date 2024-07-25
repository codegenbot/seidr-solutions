int calculate_strength(string extension) {
    int CAP = 0, SM = 0;
    for(char ch : extension) {
        if(isupper(ch)) CAP++;
        else if(islower(ch)) SM++;
    }
    return CAP - SM;
}

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int max_strength = calculate_strength(extensions[0]);
    
    for(int i = 1; i < extensions.size(); i++) {
        int current_strength = calculate_strength(extensions[i]);
        if(current_strength > max_strength) {
            strongest_extension = extensions[i];
            max_strength = current_strength;
        }
    }
    
    return class_name + "." + strongest_extension;
}