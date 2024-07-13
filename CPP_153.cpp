int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest_strength = 0;
    string strongest_extension;
    for(auto extension : extensions){
        int cap = count(extension.begin(),extension.end(),std::toupper);
        int sm = extension.size() - cap;
        if(cap - sm > strongest_strength){
            strongest_strength = cap - sm;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}