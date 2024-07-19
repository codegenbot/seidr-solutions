int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = 0;
    string strongest_extension;

    for(auto extension : extensions){
        int cap = count(extension.begin(), extension.end(), toupper);
        int sm = extension.length() - cap;
        double strength = (double)cap / sm;

        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extension;
        }
    }

    return class_name + "." + strongest_extension;
}