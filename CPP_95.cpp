if(dict.empty()) return false;
bool is_lowercase = true, is_uppercase = true;
for(auto const& entry : dict){
    for(auto const& c : entry.first){
        if(!islower(c)){
            is_lowercase = false;
            break;
        }
    }
    for(auto const& c : entry.first){
        if(!isupper(c)){
            is_uppercase = false;
            break;
        }
    }
}
return is_lowercase || is_uppercase;
}