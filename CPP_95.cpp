if(dict.empty()) return false;
bool lower = true, upper = true;
for(auto const &pair : dict){
    if(pair.first != tolower(pair.first[0])) upper = false;
    if(pair.first != toupper(pair.first[0])) lower = false;
}
return lower || upper;
}