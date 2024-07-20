Here is the completed code:

int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = -1;
    string strong_ext;

    for(auto ext:extensions){
        int cap = 0, sm = 0;
        for(auto ch:ext){
            if(isupper(ch))cap++;
            else if(islower(ch))sm++;
        }
        int strength = cap - sm;
        if(strength > strongest){
            strongest = strength;
            strong_ext = ext;
        }
    }

    return class_name + "." + strong_ext;
}