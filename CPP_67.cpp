int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    int mangoes = 0;

    // Parse the string to extract the number of apples and oranges
    int pos = s.find("apples");
    if (pos != string::npos) {
        apples = stoi(s.substr(0, pos));
    }

    pos = s.find("oranges");
    if (pos != string::npos) {
        oranges = stoi(s.substr(pos - 2, 2));
    }

    // Calculate the number of mangoes
    mangoes = n - apples - oranges;

    return mangoes;
}