Here is the completed code:

string Strongest_Extension(string class_name, vector<string> extensions){
    string strongest_extension = "";
    int max_strength = 0;
    
    for (const auto& extension : extensions) {
        int cap = count_if(extension.begin(), extension.end(), ::isupper);
        int sm = extension.size() - cap;
        int strength = cap - sm;
        
        if (strength > max_strength || (strength == max_strength && strongest_extension.empty())) {
            strongest_extension = extension;
            max_strength = strength;
        }
    }
    
    return class_name + "." + strongest_extension;
}