if (dict.empty()) {
    return false;
}

bool all_lowercase = true;
bool all_uppercase = true;

for (const auto& pair : dict) {
    for (char c : pair.first) {
        if (!islower(c)) {
            all_lowercase = false;
            break;
        }
    }

    for (char c : pair.first) {
        if (!isupper(c)) {
            all_uppercase = false;
            break;
        }
    }
}

return all_lowercase || all_uppercase;