string Strongest_Extension(string class_name, vector<string> extensions){
    int strongest = 0;
    string best_extension;

    for(auto &ext : extensions){
        int cap = count(ext.begin(), ext.end(), toupper(ext[0]));
        int sm = ext.size() - cap;
        int strength = cap - sm;
        
        if(strength > strongest || (strength == strongest && ext < best_extension)){
            strongest = strength;
            best_extension = ext;
        }
    }

    return class_name + "." + best_extension;
}