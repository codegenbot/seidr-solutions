int Strongest_Extension(std::string class_name, std::vector<std::string> extensions) {
    int strongest = -1;
    for(auto& extension:extensions){
        int cap = 0;
        int sm = 0;
        for(char c:extension){
            if(isupper(c))cap++;
            else if(islower(c))sm++;
        }
        int strength = cap - sm;
        if(strength > strongest){
            strongest = strength;
            class_name += "." + extension;
        }
    }
    return class_name;
}