string int_to_mini_romank(int number){
    const vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const vector<string> symbols = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    string result = "";
    for (size_t i = 0; i < values.size(); i++) {
        while (number >= values[i]) {
            result += symbols[i];
            number -= values[i];
        }
    }

    return result;
}