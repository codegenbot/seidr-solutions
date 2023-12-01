int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;

    // Parse the string to get the number of apples and oranges
    int pos = s.find("apples");
    if (pos != string::npos) {
        int spacePos = s.rfind(" ", pos);
        apples = stoi(s.substr(spacePos + 1, pos - spacePos - 1));
    }

    pos = s.find("oranges");
    if (pos != string::npos) {
        int spacePos = s.rfind(" ", pos);
        oranges = stoi(s.substr(spacePos + 1, pos - spacePos - 1));
    }

    // Calculate the number of mango fruits
    int mangoes = n - apples - oranges;

    return mangoes;
}