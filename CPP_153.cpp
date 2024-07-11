string Strongest_Extension(string class_name, vector<string> extensions){
    string strongest_extension = extensions[0];
    int max_strength = count_if(strongest_extension.begin(), strongest_extension.end(), ::isupper) - count_if(strongest_extension.begin(), strongest_extension.end(), ::islower);

    for(int i = 1; i < extensions.size(); ++i){
        int strength = count_if(extensions[i].begin(), extensions[i].end(), ::isupper) - count_if(extensions[i].begin(), extensions[i].end(), ::islower);
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extensions[i];
        }
    }

    return class_name + "." + strongest_extension;
}