string Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = INT_MIN;
    string strongest_extension;

    for(const auto& extension : extensions){
        int cap_count = 0, sm_count = 0;
        for(const auto& ch : extension){
            if(isupper(ch)) cap_count++;
            if(islower(ch)) sm_count++;
        }

        int strength = cap_count - sm_count;
        if(strength > max_strength || (strength == max_strength && extension < strongest_extension)){
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}