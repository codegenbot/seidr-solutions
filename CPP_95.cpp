if(dict.empty())
    return false;
bool is_lower = true, is_upper = true;
for(auto& kv : dict){
    if(!islower(kv.first[0]))
        is_lower = false;
    if(!isupper(kv.first[0]))
        is_upper = false;
}
return is_lower || is_upper;
}