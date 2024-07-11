if(dict.empty()) return false;
bool is_lower = true, is_upper = true;
for(auto const& entry : dict) {
    for(auto const& c : entry.first) {
        if(islower(c)) {
            is_upper = false;
        } else if(isupper(c)) {
            is_lower = false;
        }
    }
    if(!is_lower && !is_upper) return false;
}
return true;
}