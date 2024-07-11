int Strongest_Extension(string class_name,vector<string> extensions){
    string strongest = extensions[0];
    int max_strength = 0;
    
    for(auto& extension : extensions) {
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = count(extension.begin(), extension.end(), tolower) - cap;
        if(sm > max_strength) {
            max_strength = sm;
            strongest = extension;
        }
    }
    
    return class_name + "." + strongest;
}