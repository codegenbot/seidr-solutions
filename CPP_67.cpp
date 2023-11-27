int fruit_distribution(string s, int n) {
    int mangoes = n;
    int pos = s.find("apples");
    if (pos != string::npos) {
        int apples = stoi(s.substr(0, pos));
        mangoes -= apples;
    }
    pos = s.find("oranges");
    if (pos != string::npos) {
        int oranges = stoi(s.substr(pos + 8));
        mangoes -= oranges;
    }
    return mangoes;
}