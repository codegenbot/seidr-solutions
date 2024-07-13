int Strongest_Extension(string class_name, vector<string> extensions){
    int strongest_strength = 0;
    string strongest_extension;
    
    for(auto& extension: extensions){
        int cap_count = 0;
        int sm_count = 0;
        
        for(char c: extension){
            if(isupper(c))
                cap_count++;
            else
                sm_count++;
        }
        
        int extension_strength = cap_count - sm_count;
        
        if(extension_strength > strongest_strength || (extension_strength == strongest_strength && extensions.size() == find(extensions.begin(), extensions.end(), extension) - extensions.begin())){
            strongest_strength = extension_strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}