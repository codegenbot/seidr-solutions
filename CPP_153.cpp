int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = -1;
    string strongest_extension;
    for(auto extension: extensions){
        int upper_count = 0, lower_count = 0;
        for(char c : extension){
            if(isupper(c)) upper_count++;
            else if(islower(c)) lower_count++;
        }
        int strength = upper_count - lower_count;
        if(strength > max_strength || (strength == max_strength && extension < strongest_extension)){
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}