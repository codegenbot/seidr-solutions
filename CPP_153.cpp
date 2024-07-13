int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0, best_extension;
    for(int i=0; i<extensions.size(); i++){
        int cap = 0, sm = 0;
        for(int j=0; j<extensions[i].size(); j++){
            if(isupper(extensions[i][j]))
                cap++;
            else
                sm++;
        }
        if(cap - sm > max_strength){
            max_strength = cap - sm;
            best_extension = i;
        }
    }
    return class_name + "." + extensions[best_extension];
}