if(dict.empty()) return false;
bool lower = true, upper = true;
for(auto const& pair : dict){
    for(auto c : pair.first){
        if(islower(c)) upper = false;
        if(isupper(c)) lower = false;
    }
}
return lower || upper;
}