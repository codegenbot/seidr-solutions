if(dict.empty()) return false;
bool all_lower = true;
bool all_upper = true;
for(auto const& entry : dict) {
    string key = entry.first;
    bool is_lower = true;
    bool is_upper = true;
    for(char c : key) {
        if(!islower(c)) is_lower = false;
        if(!isupper(c)) is_upper = false;
    }
    all_lower = all_lower && is_lower;
    all_upper = all_upper && is_upper;
}
return all_lower || all_upper;
}