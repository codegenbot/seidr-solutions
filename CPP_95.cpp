if (dict.empty()) {
    return false;
}

bool isLower = true;
bool isUpper = true;

for (const auto& pair : dict) {
    if (!isLower && !isUpper) {
        return false;
    }
    if (!islower(pair.first[0])) {
        isLower = false;
    }
    if (!isupper(pair.first[0])) {
        isUpper = false;
    }
}

return isLower || isUpper;
}