if (dict.empty()) {
    return false;
}

bool is_lower = true;
bool is_upper = true;

for (const auto& entry : dict) {
    if (!islower(entry.first[0])) {
        is_lower = false;
    }
    if (!isupper(entry.first[0])) {
        is_upper = false;
    }
}

return is_lower || is_upper;
}