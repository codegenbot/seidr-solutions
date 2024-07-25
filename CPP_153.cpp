int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = -10000;
    string strongest_extension;
    for(auto extension : extensions){
        int cap = 0;
        int sm = 0;
        for(int i=0; i<extension.length();i++){
            if(isupper(extension[i]))
                cap++;
            else if(islower(extension[i]))
                sm++;
        }
        int strength = cap - sm;
        if(strength > strongest){
            strongest = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}