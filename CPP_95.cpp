bool all_lowercase = true;
    bool all_uppercase = true;
    for (const auto& pair : dict) {
        if (!pair.first.empty() && islower(pair.first[0])) {
            all_uppercase = false;
        }
        else if (!pair.first.empty() && isupper(pair.first[0])) {
            all_lowercase = false;
        }
    }
    return dict.empty() ? false : (all_lowercase || all_uppercase);
}