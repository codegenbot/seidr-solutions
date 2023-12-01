int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;

    // Parse the string to count the number of apples and oranges
    size_t applePos = s.find("apples");
    if (applePos != string::npos) {
        size_t spaceBeforeApple = s.find_last_of(" ", applePos);
        apples = stoi(s.substr(spaceBeforeApple, applePos - spaceBeforeApple));
    }

    size_t orangePos = s.find("oranges");
    if (orangePos != string::npos) {
        size_t spaceBeforeOrange = s.find_last_of(" ", orangePos);
        oranges = stoi(s.substr(spaceBeforeOrange, orangePos - spaceBeforeOrange));
    }

    // Calculate the number of mango fruits
    int mangoes = n - apples - oranges;

    return mangoes;
}
