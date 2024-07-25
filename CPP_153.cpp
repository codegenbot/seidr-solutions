int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for(auto& extension : extensions){
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = count(extension.begin(), extension.end(), tolower) - cap;
        if(sm < max_strength || sm == 0 && cap > 0){
            max_strength = sm;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}