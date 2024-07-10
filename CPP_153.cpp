int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for(auto &extension : extensions){
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = count(extension.begin(), extension.end(), tolower);

        double strength = static_cast<double>(cap - sm) / (cap + sm);

        if(strength > max_strength || (strength == max_strength && extension < strongest_extension)){
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}