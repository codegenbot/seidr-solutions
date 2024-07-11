if(dict.empty()) return false;
bool all_lower = true, all_upper = true;
for(auto const& entry : dict) {
    for(auto const& c : entry.first) {
        if(islower(c)) all_upper = false;
        if(isupper(c)) all_lower = false;
    }
}
return all_lower || all_upper;
}