if(dict.empty()) return false;
bool is_lower = true, is_upper = true;
for(auto const& pair : dict) {
    if(pair.first != tolower(pair.first[0])) {
        is_lower = false;
    }
    if(pair.first != toupper(pair.first[0])) {
        is_upper = false;
    }
}
return is_lower || is_upper;
}