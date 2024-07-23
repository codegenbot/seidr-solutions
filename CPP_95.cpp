if(dict.empty()) return false;
bool all_lower = true;
bool all_upper = true;
for(auto const &entry : dict) {
    string key = entry.first;
    if(!key.empty() && !islower(key[0])) {
        all_lower = false;
    }
    if(!key.empty() && !isupper(key[0])) {
        all_upper = false;
    }
}
return all_lower || all_upper;