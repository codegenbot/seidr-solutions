if(dict.empty()) return false;
bool all_lowercase = true;
bool all_uppercase = true;
for(auto const& pair : dict) {
    if(pair.first != tolower(pair.first[0])) {
        all_lowercase = false;
    }
    if(pair.first != toupper(pair.first[0])) {
        all_uppercase = false;
    }
}
return all_lowercase || all_uppercase;
}