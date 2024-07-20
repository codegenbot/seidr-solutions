Here is the completed code:

int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = 0;
    string strongest_extension;
    for(auto extension : extensions){
        int upper_count = 0;
        int lower_count = 0;
        for(char c : extension){
            if(isupper(c)) upper_count++;
            else if(islower(c)) lower_count++;
        }
        int strength = upper_count - lower_count;
        if(strength > strongest){
            strongest = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}