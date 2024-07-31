std::string int_to_mini_roman(int number) {
    std::string result;
    for (int i = 0; i < 13; ++i) {
        while (number >= values[i]) {
            number -= values[i];
            result += roman[i];
        }
    }
    return result;
}