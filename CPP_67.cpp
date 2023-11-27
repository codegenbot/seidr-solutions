int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;

    // Extract the number of apples and oranges from the string
    size_t applesPos = s.find("apples");
    size_t orangesPos = s.find("oranges");

    if (applesPos != string::npos) {
        string applesStr = s.substr(0, applesPos);
        apples = stoi(applesStr);
    }

    if (orangesPos != string::npos) {
        string orangesStr = s.substr(applesPos + 7, orangesPos - applesPos - 7);
        oranges = stoi(orangesStr);
    }

    // Calculate the number of mango fruits
    int mangoes = n - apples - oranges;

    return mangoes;
}