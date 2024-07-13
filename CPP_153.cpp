int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = -1, best_idx = -1;
    for(int i=0; i<extensions.size(); i++){
        int cap = 0, sm = 0;
        for(char c : extensions[i]){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        if(cap-sm > max_strength){
            max_strength = cap-sm;
            best_idx = i;
        }
    }
    return class_name + "." + extensions[best_idx];
}