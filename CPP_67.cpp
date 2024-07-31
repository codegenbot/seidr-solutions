int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    
    int pos = s.find("apples");
    if (pos != string::npos) {
        apples = stoi(s.substr(0, pos));
    }
    
    pos = s.find("oranges");
    if (pos != string::npos) {
        oranges = stoi(s.substr(s.find("apples") + 7, pos - s.find("apples") - 8));
    }
    
    int mangoes = n - apples - oranges;
    return mangoes;
}