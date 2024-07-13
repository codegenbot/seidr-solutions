int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = -1000000;
    string strongest_extension;

    for(int i=0;i<extensions.size();i++){
        int CAP = 0, SM = 0;
        for(char c: extensions[i]){
            if(isupper(c))CAP++;
            else if(islower(c))SM++;
        }
        int strength = CAP - SM;
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extensions[i];
        }else if(strength == max_strength){
            strongest_extension = extensions[i];
        }
    }

    return class_name + "." + strongest_extension;
}