string Strongest_Extension(string class_name, vector<string> extensions){
    string strongest_extension = "";
    int max_strength = 0;
    
    for (const auto& extension : extensions) {
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = count(extension.begin(), extension.end(), tolower);
        
        if (cap - sm > max_strength) {
            strongest_extension = extension;
            max_strength = cap - sm;
        }
    }
    
    return class_name + "." + strongest_extension;
}