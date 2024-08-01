if(dict.empty()) return false;

bool all_lower = true;
bool all_upper = true;

for(auto const& pair : dict) {
    if(pair.first != tolower(pair.first)) {
        all_lower = false;
    }
    if(pair.first != toupper(pair.first)) {
        all_upper = false;
    }
}

return all_lower || all_upper;
}