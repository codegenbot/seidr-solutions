int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    int pos = s.find("apples");
    if (pos != string::npos) {
        string num = s.substr(0, pos);
        apples = stoi(num);
    }
    pos = s.find("oranges");
    if (pos != string::npos) {
        string num = s.substr(pos);
        oranges = stoi(num);
    }
    int mangoes = n - apples - oranges;
    return mangoes;
}