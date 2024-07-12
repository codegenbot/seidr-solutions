string int_to_mini_romank(int number) {
    vector<string> romans = {"i", "iv", "v", "ix", "x", "xl", "l", "xc", "c", "cd", "d", "cm", "m"};
    vector<int> values = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string result = "";
    
    int i = romans.size() - 1;
    while (number > 0) {
        int div = number / values[i];
        number %= values[i];
        
        while (div > 0) {
            result += romans[i];
            div--;
        }
        i--;
    }
    
    return result;
}