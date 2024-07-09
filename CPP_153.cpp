int Strongest_Extension(string class_name,vector<string> extensions){
    string strongest_extension = "";
    int max_strength = -1;
    for(auto &extension : extensions){
        int strength = 0;
        int cap = 0;
        int sm = 0;
        for(char c : extension){
            if(isupper(c))cap++;
            else if(islower(c))sm++;
        }
        if(cap-sm>max_strength){
            max_strength=cap-sm;
            strongest_extension = extension;
        }
    }
    return class_name+"."+strongest_extension;
}