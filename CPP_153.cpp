string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int max_strength = count_if(strongest_extension.begin(), strongest_extension.end(), ::isupper) - count_if(strongest_extension.begin(), strongest_extension.end(), ::islower);
    
    for (const auto& ext : extensions) {
        int current_strength = count_if(ext.begin(), ext.end(), ::isupper) - count_if(ext.begin(), ext.end(), ::islower);
        if (current_strength > max_strength) {
            strongest_extension = ext;
            max_strength = current_strength;
        }
    }
    
    return class_name + "." + strongest_extension;
}