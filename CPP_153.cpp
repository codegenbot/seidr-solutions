string Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = INT_MIN;
    string strongest_extension = "";
    
    for(int i = 0; i < extensions.size(); i++){
        int cap_letters = 0;
        int small_letters = 0;
        
        for(int j = 0; j < extensions[i].length(); j++){
            if(isupper(extensions[i][j])){
                cap_letters++;
            }
            else if(islower(extensions[i][j])){
                small_letters++;
            }
        }
        
        int strength = cap_letters - small_letters;
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extensions[i];
        }
    }
    
    return class_name + "." + strongest_extension;
}