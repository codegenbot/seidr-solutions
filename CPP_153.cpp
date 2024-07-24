int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = -1;
    string result;
    for(auto& extension : extensions){
        int cap = 0, sm = 0;
        for(int i=0; i<extension.size(); i++){
            if(isupper(extension[i]))
                cap++;
            else
                sm++;
        }
        int strength = cap - sm;
        if(strength > strongest){
            strongest = strength;
            result = extension;
        }
    }
    return class_name + "." + result;
}