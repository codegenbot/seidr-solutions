if (dict.empty()) {
    return false;
}

bool is_lowercase = true;
bool is_uppercase = true;

for (const auto& pair : dict) {
    for (char c : pair.first) {
        if (!islower(c)) {
            is_lowercase = false;
            break;
        }
    }
    for (char c : pair.first) {
        if (!isupper(c)) {
            is_uppercase = false;
            break;
        }
    }
}

return is_lowercase || is_uppercase;
}