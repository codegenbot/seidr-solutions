if(dict.empty()) return false;
bool all_lower = true, all_upper = true;
for(auto const& entry : dict){
    string key = entry.first;
    if(key != "" && key == string(key.size(), tolower(key[0])))
        all_upper = false;
    else if(key != "" && key == string(key.size(), toupper(key[0])))
        all_lower = false;
}
return all_lower || all_upper;
}