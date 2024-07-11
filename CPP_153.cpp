string Strongest_Extension(string class_name, vector<string> extensions){
    string strongest_extension = extensions[0];
    int strongest_strength = 0;
    
    for(const auto& extension : extensions){
        int cap_count = 0, sm_count = 0;
        for(const auto& c : extension){
            if(isupper(c)){
                cap_count++;
            } else if(islower(c)){
                sm_count++;
            }
        }
        
        int strength = cap_count - sm_count;
        if(strength > strongest_strength){
            strongest_extension = extension;
            strongest_strength = strength;
        }
    }
    
    return class_name + "." + strongest_extension;
}