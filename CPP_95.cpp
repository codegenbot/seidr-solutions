if(dict.empty()) return false;
bool is_lower = true;
bool is_upper = true;
for(auto const &pair : dict){
    string key = pair.first;
    for(auto c : key){
        if(islower(c)){
            is_upper = false;
        } else if(isupper(c)){
            is_lower = false;
        }
    }
}
return is_lower || is_upper;
}