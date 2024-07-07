int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = 0;
    string strongest_extension;
    for(auto extension : extensions){
        int cap = count(extension.begin(),extension.end(),toupper);
        int sm = count(extension.begin(),extension.end(),tolower);
        if((cap - sm) > strongest){
            strongest = cap - sm;
            strongest_extension = extension;
        }
    }
    return class_name+"."+strongest_extension;
}