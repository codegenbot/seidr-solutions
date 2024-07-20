bool all_keys_lower = true;
bool all_keys_upper = true;

for(auto p : dict) {
    if(dict.empty()) return false;  // Check for empty map
    string key = p.first;
    bool key_is_lower = (key.find(' ') == string::npos && isalpha(key[0]) && tolower(key) == key);
    bool key_is_upper = (key.find(' ') == string::npos && isalpha(key[0]) && toupper(key) == key);

    if(!key_is_lower && !key_is_upper) {
        return false;  // Found a mixed case key
    }

    all_keys_lower &= key_is_lower;
    all_keys_upper &= key_is_upper;
}

return all_keys_lower || all_keys_upper;