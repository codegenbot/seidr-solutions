if (dict.empty()) {
    return false;
}

bool allLower = true;
bool allUpper = true;

for (const auto& pair : dict) {
    for (char c : pair.first) {
        if (!islower(c)) {
            allLower = false;
            break;
        }
    }

    for (char c : pair.first) {
        if (!isupper(c)) {
            allUpper = false;
            break;
        }
    }
}

return allLower || allUpper;