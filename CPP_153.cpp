string Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = INT_MIN;
    string result = "";
    
    for (string ext : extensions) {
        int CAP = 0, SM = 0;
        for (char c : ext) {
            if (isupper(c)) {
                CAP++;
            } else if (islower(c)) {
                SM++;
            }
        }
        
        int strength = CAP - SM;
        if (strength > max_strength || (strength == max_strength && result.empty())) {
            max_strength = strength;
            result = ext;
        }
    }
    
    return class_name + "." + result;
}