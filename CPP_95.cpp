if(dict.empty()) return false;
bool is_lower = true, is_upper = true;
for(auto const& pair : dict){
    for(auto const& c : pair.first){
        if(islower(c)){
            is_upper = false;
        } else if(isupper(c)){
            is_lower = false;
        }
    }
}
return is_lower || is_upper;
}