int Strongest_Extension(string class_name,vector<string> extensions){
    string strongest = "";
    int max_strength = 0;
    for(auto ext : extensions){
        int cap_count = 0;
        int sm_count = 0;
        for(char c : ext){
            if(isupper(c)) cap_count++;
            else if(islower(c)) sm_count++;
        }
        int strength = cap_count - sm_count;
        if(strength > max_strength || (strength == max_strength && ext < strongest)){
            strongest = ext;
            max_strength = strength;
        }
    }
    return class_name + "." + strongest;
}