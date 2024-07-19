if(dict.empty()) return false;
bool lower = true, upper = true;
for(auto const &entry : dict) {
    for(char c : entry.first) {
        if(!islower(c)) lower = false;
        if(!isupper(c)) upper = false;
    }
}
return lower || upper;
}