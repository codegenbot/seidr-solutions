if(dict.empty()) return false;
bool all_lowercase = true;
bool all_uppercase = true;
for(auto const& entry : dict) {
    if(!entry.first.empty() && !islower(entry.first[0])) {
        all_lowercase = false;
    }
    if(!entry.first.empty() && !isupper(entry.first[0])) {
        all_uppercase = false;
    }
}
return all_lowercase || all_uppercase;
}