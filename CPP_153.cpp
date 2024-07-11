Here is the completed code:

int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest_strength = 0;
    string strongest_extension;
    
    for(auto extension:extensions){
        int cap = 0, sm = 0;
        
        for(int i=0; i<extension.length(); i++){
            if(toupper(extension[i]) >= 'A' && toupper(extension[i]) <= 'Z')
                cap++;
            else
                sm++;
        }
        
        double strength = (double)cap - sm;
        
        if(strength > strongest_strength){
            strongest_strength = strength;
            strongest_extension = extension;
        }
    }
    
    return class_name + "." + strongest_extension;
}