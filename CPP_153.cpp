Here is the completed code:

int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = -1;
    string strongest_extension;
    for(auto ext:extensions){
        int cap = 0, sm = 0;
        for(char c:ext){
            if(isupper(c))cap++;
            else if(islower(c))sm++;
        }
        double strength = (double)cap-sm;
        if(strength > strongest){
            strongest = strength;
            strongest_extension = ext;
        }
    }
    return class_name + "." + strongest_extension;
}