string Strongest_Extension(string class_name, vector<string> extensions){
    string strongest = "";
    int max_strength = 0;
    for(auto extension: extensions){
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = count(extension.begin(), extension.end(), tolower);
        if(cap - sm > max_strength || (cap - sm == max_strength && extension < strongest)){
            max_strength = cap - sm;
            strongest = extension;
        }
    }
    return class_name + "." + strongest;
}