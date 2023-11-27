int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    int mangoes = 0;

    // Count the number of apples and oranges in the string
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'A') {
            apples++;
        } else if (s[i] == 'o' || s[i] == 'O') {
            oranges++;
        }
    }

    // Calculate the number of mangoes
    mangoes = n - apples - oranges;

    return mangoes;
}