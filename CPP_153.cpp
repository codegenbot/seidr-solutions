string Strongest_Extension(string class_name,vector<string> extensions){
    int strongest_strength = -1000;
    string strongest_extension = "";
    
    for(const auto& extension : extensions){
        int capital_count = 0;
        int small_count = 0;
        for(char c : extension){
            if(isupper(c)) capital_count++;
            if(islower(c)) small_count++;
        }
        int strength = capital_count - small_count;
        if(strength > strongest_strength){
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}