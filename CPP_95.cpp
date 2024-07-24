if (dict.empty()) {
    return false;
}

bool all_lower = true;
bool all_upper = true;
for (const auto& entry : dict) {
    if (!isalpha(entry.first[0])) {
        return false;
    }
    if (!islower(entry.first[0])) {
        all_lower = false;
    }
    if (!isupper(entry.first[0])) {
        all_upper = false;
    }
}

return all_lower || all_upper;
}