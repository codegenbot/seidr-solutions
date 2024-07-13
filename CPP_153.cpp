int Strongest_Extension(string class_name, vector<string> extensions){
    int strongest = 0;
    string best_extension;

    for(auto ext:extensions){
        int cap = 0, sm = 0;
        for(auto c:ext){
            if(isupper(c))cap++;
            else if(islower(c))sm++;
        }
        int strength = cap - sm;
        if(strength > strongest){
            strongest = strength;
            best_extension = ext;
        }else if(strength == strongest){
            best_extension = ext;
        }
    }

    return class_name + "." + best_extension;
}