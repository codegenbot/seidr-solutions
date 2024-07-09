if(dict.empty()) return false;
bool all_lower = true, all_upper = true;
for(auto const& entry : dict) {
    for(char c : entry.first) {
        if(!islower(c)) {
            all_lower = false;
            break;
        }
    }
    for(char c : entry.first) {
        if(!isupper(c)) {
            all_upper = false;
            break;
        }
    }
}
return all_lower || all_upper;