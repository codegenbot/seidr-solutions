string Strongest_Extension(string class_name, vector<string> extensions){
    int strongest = 0;
    string strongest_extension;
    
    for(auto ext : extensions){
        int cap = 0;
        int sm = 0;
        
        for(char c : ext){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        
        if(cap - sm > strongest){
            strongest = cap - sm;
            strongest_extension = ext;
        } 
    }
    
    return class_name + "." + strongest_extension;
}