vector<string> roman_nums = {"i", "iv", "v", "ix", "x", "xl", "l", "xc", "c", "cd", "d", "cm", "m"};
    vector<int> values = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

    string result = "";
    int index = 12;

    while (number > 0) {
        int div = number / values[index];
        number %= values[index];

        while (div--) {
            result += roman_nums[index];
        }
        index--;
    }

    return result;
}