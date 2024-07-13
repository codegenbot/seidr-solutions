int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;
    for(auto &extension : extensions){
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = extension.size() - cap;
        double strength = static_cast<double>(cap) / (sm + 1e-9); // prevent division by zero
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}