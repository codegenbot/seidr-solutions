string Strongest_Extension(string class_name,vector<string> extensions){
    string strongest_extension = extensions[0];
    int strongest_strength = 0;

    for(int i=1; i<extensions.size(); i++){
        int upper_count = 0;
        int lower_count = 0;

        for(char c: extensions[i]){
            if(isupper(c))
                upper_count++;
            else
                lower_count++;
        }

        int strength = upper_count - lower_count;
        
        if(strength > strongest_strength){
            strongest_extension = extensions[i];
            strongest_strength = strength;
        }
    }

    return class_name + "." + strongest_extension;
}