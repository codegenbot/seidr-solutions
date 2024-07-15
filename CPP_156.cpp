vector<string> symbol = {"i", "iv", "v", "ix", "x", "xl", "l", "xc", "c", "cd", "d", "cm", "m"};
    vector<int> value = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string result = "";

    for (int i = symbol.size() - 1; i >= 0; i--) {
        while (number >= value[i]) {
            number -= value[i];
            result += symbol[i];
        }
    }

    return result;
}