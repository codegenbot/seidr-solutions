if(dict.empty()) {
    return false;
}

bool all_lower = true;
bool all_upper = true;

for(const auto& kv : dict) {
    for(auto c : kv.first) {
        if(islower(c)) {
            all_upper = false;
        } else if(isupper(c)) {
            all_lower = false;
        }
    }
}

return all_lower || all_upper;
}