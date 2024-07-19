int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = 0, max_strength = 0;
    string strongest_extension;

    for(auto & extension : extensions){
        int strength = 0;
        int CAP = 0, SM = 0;

        for(int i = 0; i < extension.length(); i++){
            if(isupper(extension[i])) CAP++;
            else SM++;
        }

        strength = CAP - SM;

        if(strength > max_strength || (strength == max_strength && strongest >= extensions.size())){
            max_strength = strength;
            strongest_extension = extension;
            strongest = 0;
        }
    }

    return class_name + "." + strongest_extension;
}