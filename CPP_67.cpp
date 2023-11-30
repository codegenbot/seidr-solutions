int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    int mangoes = 0;

    // Parse the string to get the number of apples and oranges
    size_t applePos = s.find("apples");
    size_t orangePos = s.find("oranges");
    if (applePos != string::npos) {
        apples = stoi(s.substr(0, applePos));
    }
    if (orangePos != string::npos) {
        oranges = stoi(s.substr(applePos + 7, orangePos - applePos - 7));
    }

    // Calculate the number of mangoes
    mangoes = n - apples - oranges;

    return mangoes;
}