if(dict.empty()) return false;
bool lower = true, upper = true;
for(auto const &entry : dict) {
    if(entry.first != tolower(entry.first[0])) upper = false;
    if(entry.first != toupper(entry.first[0])) lower = false;
}
return lower || upper;
}