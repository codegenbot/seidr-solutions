if (dict.empty()) {
    return false;
}

bool lower = true;
bool upper = true;

for (auto const& pair : dict) {
    for (auto const& c : pair.first) {
        if (!islower(c)) {
            lower = false;
            break;
        }
    }
    if (!lower) {
        break;
    }
}

for (auto const& pair : dict) {
    for (auto const& c : pair.first) {
        if (!isupper(c)) {
            upper = false;
            break;
        }
    }
    if (!upper) {
        break;
    }
}

return lower || upper;
}