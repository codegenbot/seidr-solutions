if(dict.empty()) return false;

bool all_lower = true;
bool all_upper = true;

for(auto const &entry : dict) {
    string key = entry.first;
    bool is_lower = true;
    bool is_upper = true;

    for(char ch : key) {
        if(!islower(ch)) {
            is_lower = false;
        }
        if(!isupper(ch)) {
            is_upper = false;
        }
    }

    if(!is_lower) all_lower = false;
    if(!is_upper) all_upper = false;
}

return all_lower || all_upper;
}