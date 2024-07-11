int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = 0;
    string strongest_extension = "";
    for(auto extension : extensions){
        int cap = 0;
        int sm = 0;
        for(char c:extension){
            if(isupper(c))cap++;
            else sm++;
        }
        int strength = cap - sm;
        if(strength > strongest || (strength == strongest && extension < strongest_extension)){
            strongest = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}