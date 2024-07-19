if(dict.empty()) return false;
bool is_lower = true;
bool is_upper = true;
for(auto const& entry : dict){
    if(entry.first != tolower(entry.first[0]))
        is_lower = false;
    if(entry.first != toupper(entry.first[0]))
        is_upper = false;
}
return is_lower || is_upper;
}