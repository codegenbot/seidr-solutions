if(dict.empty()) {
        return false;
    }
    
    bool lower = true;
    bool upper = true;
    
    for(auto& pair : dict){
        string key = pair.first;
        for(auto& c : key){
            if(!islower(c)){
                lower = false;
            }
            if(!isupper(c)){
                upper = false;
            }
        }
    }
    
    return lower || upper;
}