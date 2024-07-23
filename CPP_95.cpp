if(dict.empty()) {
    return false;
}

bool all_lowercase = true;
bool all_uppercase = true;

for(const auto& pair : dict) {
    string key = pair.first;
    bool contains_upper = any_of(key.begin(), key.end(), ::isupper);
    bool contains_lower = any_of(key.begin(), key.end(), ::islower);

    if(contains_upper) {
        all_lowercase = false;
    }
    if(contains_lower) {
        all_uppercase = false;
    }
}

return all_lowercase || all_uppercase;
}