string Strongest_Extension(string class_name, vector<string> extensions){
    string strongest_extension = "";
    int max_strength = INT_MIN;
    
    for(const auto &ext : extensions){
        int cap_count = 0, sm_count = 0;
        for(const auto &ch : ext){
            if(isupper(ch)){
                cap_count++;
            }
            if(islower(ch)){
                sm_count++;
            }
        }
        int strength = cap_count - sm_count;
        if(strength > max_strength || (strength == max_strength && ext < strongest_extension)){
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    
    return class_name + "." + strongest_extension;
}