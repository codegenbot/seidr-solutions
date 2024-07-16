if (dict.empty()) {
    return false;
}

bool is_lower = true;
bool is_upper = true;

for (const auto& entry : dict) {
    for (char c : entry.first) {
        if (!islower(c)) {
            is_lower = false;
            break;
        }
    }

    for (char c : entry.first) {
        if (!isupper(c)) {
            is_upper = false;
            break;
        }
    }
}

return is_lower || is_upper;