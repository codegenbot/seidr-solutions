string Strongest_Extension(string class_name,vector<string> extensions){
    string strongest_ext = extensions[0];
    int max_strength = calculate_strength(extensions[0]);

    for (int i = 1; i < extensions.size(); ++i) {
        int strength = calculate_strength(extensions[i]);
        if (strength > max_strength) {
            max_strength = strength;
            strongest_ext = extensions[i];
        }
    }

    return class_name + "." + strongest_ext;
}

int calculate_strength(string s){
    int cap = 0, sm = 0;
    for(int i=0; i<s.size(); i++){
        if(isupper(s[i])){
            cap++;
        } else {
            sm++;
        }
    }
    return cap - sm;
}