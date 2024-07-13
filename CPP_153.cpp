int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = 0;
    string res = "";
    for(auto ext : extensions){
        int cap = 0, sm = 0;
        for(char c : ext){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > strongest || (strength == strongest && ext < res)){
            strongest = strength;
            res = class_name + "." + ext;
        }
    }
    return res;
}