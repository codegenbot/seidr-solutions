int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = -1;
    string strongest_extension;
    
    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(int i = 0; i < extension.length(); i++){
            if(isupper(extension[i])) cap++;
            else if(islower(extension[i])) sm++;
        }
        int strength = cap - sm;
        
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extension;
        }else if(strength == max_strength){
            if(find(extensions.begin(), extensions.end(), extension) < find(extensions.begin(), extensions.end(), strongest_extension))
                strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}