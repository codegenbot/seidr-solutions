std::string int_to_mini_roman(int num) {
    if (num <= 0)
        return "";
    return toMiniRomanHelper(num, "", "MDC");