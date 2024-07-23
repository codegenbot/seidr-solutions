int CAP(string s){
    int count = 0;
    for(char c : s){
        if(isupper(c)){
            count++;
        }
    }
    return count;
}

int SM(string s){
    int count = 0;
    for(char c : s){
        if(islower(c)){
            count++;
        }
    }
    return count;
}

string Strongest_Extension(string class_name, vector<string> extensions){
    string strongest = "";
    int max_strength = INT_MIN;
    
    for(string ext : extensions){
        int strength = CAP(ext) - SM(ext);
        if(strength > max_strength || (strength == max_strength && ext < strongest)){
            max_strength = strength;
            strongest = ext;
        }
    }
    
    return class_name + "." + strongest;
}