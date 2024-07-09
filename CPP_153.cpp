int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = -1;
    string strongest_extension;

    for(int i=0; i<extensions.size(); i++){
        int cap = 0, sm = 0;
        for(int j=0; j<extensions[i].size(); j++){
            if(isupper(extensions[i][j])) cap++;
            else if(islower(extensions[i][j])) sm++;
        }
        int strength = cap - sm;

        if(strength > strongest){
            strongest = strength;
            strongest_extension = extensions[i];
        }
    }

    return class_name + "." + strongest_extension;
}