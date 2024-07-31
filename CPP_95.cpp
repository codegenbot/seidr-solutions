if(dict.empty()) return false;

bool is_lowercase = true;
bool is_uppercase = true;

for(auto& entry : dict) {
    for(char c : entry.first) {
        if(islower(c)) {
            is_uppercase = false;
        }
        if(isupper(c)) {
            is_lowercase = false;
        }
    }
}

return is_uppercase || is_lowercase;
}