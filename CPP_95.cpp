if(dict.empty()) return false;
bool is_lowercase = true;
bool is_uppercase = true;
for(auto const& pair : dict){
    for(auto c : pair.first){
        if(!islower(c)){
            is_lowercase = false;
            break;
        }
    }
    for(auto c : pair.first){
        if(!isupper(c)){
            is_uppercase = false;
            break;
        }
    }
}
return is_lowercase || is_uppercase;
}