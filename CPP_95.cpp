if (dict.empty()) {
    return false;
}

bool all_lower = true;
bool all_upper = true;

for (const auto& pair : dict) {
    const string& key = pair.first;
    for (char c : key) {
        if (!islower(c)) {
            all_lower = false;
            break;
        }
    }
    for (char c : key) {
        if (!isupper(c)) {
            all_upper = false;
            break;
        }
    }
}

return all_lower || all_upper;
}