Here is the completed code:

string Strongest_Extension(string class_name,vector<string> extensions){
    string strongest_extension;
    int strongest_strength = 0;
    
    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(int i=0; i<extension.length(); i++){
            if(isupper(extension[i])) cap++;
            else if(islower(extension[i])) sm++;
        }
        
        if(cap - sm > strongest_strength){
            strongest_extension = extension;
            strongest_strength = cap - sm;
        }
    }
    
    return class_name + "." + strongest_extension;
}