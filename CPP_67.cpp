int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    int start = s.find("apples");
    if (start != string::npos) {
        int end = s.find(" ", start);
        apples = stoi(s.substr(start, end - start));
    }
    start = s.find("oranges");
    if (start != string::npos) {
        int end = s.find(" ", start);
        oranges = stoi(s.substr(start, end - start));
    }
    return n - apples - oranges;
}