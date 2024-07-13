int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = 0;
    string strongest_extension;

    for(auto extension : extensions){
        int cap = 0;
        int sm = 0;
        for(char c : extension){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > strongest){
            strongest = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}