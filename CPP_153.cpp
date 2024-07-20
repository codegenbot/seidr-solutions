int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for(auto &extension : extensions){
        int upper = 0, lower = 0;
        for(char c : extension){
            if(isupper(c)) upper++;
            else if(islower(c)) lower++;
        }
        int strength = upper - lower;
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}