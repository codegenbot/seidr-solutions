Here is the solution:

string Strongest_Extension(string class_name,vector<string> extensions){
    string strongest = "";
    int max_strength = -1;
    for(auto& ext : extensions){
        int cap = 0, sm = 0;
        for(char c: ext) {
            if(isupper(c)) ++cap;
            else if(islower(c)) ++sm;
        }
        if(cap-sm > max_strength){
            strongest = ext;
            max_strength = cap - sm;
        }else if(cap-sm == max_strength && strongest.size() < ext.size()){
            strongest = ext;
        }
    }
    return class_name + "." + strongest;
}