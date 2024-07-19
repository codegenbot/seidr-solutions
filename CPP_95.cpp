if(dict.empty()) return false;
bool all_lower = true, all_upper = true;
for(auto const& pair : dict) {
    if(pair.first != "" && pair.first != string(pair.first.size(), tolower(pair.first[0]))) {
        all_lower = false;
    }
    if(pair.first != "" && pair.first != string(pair.first.size(), toupper(pair.first[0]))) {
        all_upper = false;
    }
}
return all_lower || all_upper;