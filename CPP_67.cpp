int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;

    size_t found1 = s.find("apples");
    size_t found2 = s.find("oranges");

    if (found1 != string::npos) {
        int pos = s.find("apples");
        string num = s.substr(0, pos);
        apples = stoi(num);
    }

    if (found2 != string::npos) {
        int pos = s.find("oranges");
        string num = s.substr(found1 + 7, pos - (found1 + 7));
        oranges = stoi(num);
    }

    int mangoes = n - apples - oranges;

    return mangoes;
}