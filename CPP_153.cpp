int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = -1;
    string strongest_extension;
    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(int i=0; i<extension.length(); i++){
            if(isupper(extension[i]))
                cap++;
            else
                sm++;
        }
        if(cap-sm > strongest){
            strongest = cap-sm;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}