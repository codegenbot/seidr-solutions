string Strongest_Extension(string class_name,vector<string> extensions){
    string strongest_extension = "";
    int max_strength = INT_MIN;
    
    for(int i=0; i<extensions.size(); i++){
        int cap_count = 0;
        int sm_count = 0;
        
        for(int j=0; j<extensions[i].length(); j++){
            if(isupper(extensions[i][j])){
                cap_count++;
            }
            else if(islower(extensions[i][j])){
                sm_count++;
            }
        }
        
        int strength = cap_count - sm_count;
        
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extensions[i];
        }
    }
    
    return class_name + "." + strongest_extension;
}