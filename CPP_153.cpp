Here is the completed code:

string Strongest_Extension(string class_name,vector<string> extensions){
    string strongest_extension = "";
    int max_strength = 0;
    for(auto extension : extensions){
        int cap = count(extension.begin(),extension.end(),toupper);
        int sm = count(extension.begin(),extension.end(),tolower);
        double strength = (cap - sm) * 1.0;
        if(strength > max_strength || (strength == max_strength && strongest_extension < extension)){
            strongest_extension = class_name + "." + extension;
            max_strength = strength;
        }
    }
    return strongest_extension;
}