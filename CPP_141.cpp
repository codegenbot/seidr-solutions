if (!found_dot && !std::string("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ").find(std::toupper(c)) && digit_count > 0) {
    valid_prefix = false;
    break;
}