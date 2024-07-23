if(dict.empty()) return false;
bool is_lower = true, is_upper = true;
for(auto const& entry : dict) {
    for(char c : entry.first) {
        if(!islower(c)) is_lower = false;
        if(!isupper(c)) is_upper = false;
    }
}
return is_lower || is_upper;
}