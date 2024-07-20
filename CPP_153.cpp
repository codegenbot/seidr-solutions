string Strongest_Extension(string class_name,vector<string> extensions){
    string strongest = "";
    int max_strength = 0;
    for(auto &extension: extensions){
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = count(extension.begin(), extension.end(), tolower);
        int strength = cap - sm;
        if(strength > max_strength || (strength == max_strength && strongest.empty())){
            strongest = extension;
            max_strength = strength;
        }
    }
    return class_name + "." + strongest;
}