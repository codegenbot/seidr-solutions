if(dict.empty()) return false;
    bool isLowerCase = true, isUpperCase = true;
    for(auto const& pair : dict){
        for(auto const& c : pair.first){
            if(islower(c)) isUpperCase = false;
            if(isupper(c)) isLowerCase = false;
        }
    }
    return isLowerCase || isUpperCase;
}