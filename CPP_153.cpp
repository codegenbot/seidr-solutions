int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;
    
    for(int i=0; i<extensions.size(); i++){
        int cap = 0, sm = 0;
        for(char c : extensions[i]){
            if(c >= 'A' && c <= 'Z') cap++;
            else if(c >= 'a' && c <= 'z') sm++;
        }
        int strength = cap - sm;
        
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extensions[i];
        }else if(strength == max_strength){
            if(i < extensions.size() - 1) continue;
            strongest_extension = extensions[i];
        }
    }
    
    return class_name + "." + strongest_extension;
}