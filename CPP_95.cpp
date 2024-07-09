if(dict.empty()) return false;
bool all_lower = true, all_upper = true;
for(auto const& pair : dict) {
    if(pair.first != string(pair.first.begin(), pair.first.end(), ::tolower)) all_lower = false;
    if(pair.first != string(pair.first.begin(), pair.first.end(), ::toupper)) all_upper = false;
}
return all_lower || all_upper;