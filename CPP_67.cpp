int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string appleStr = " apples";
    string orangeStr = " oranges";

    // Count the number of apples
    size_t appleStart = s.find("apples");
    if (appleStart != string::npos) {
        size_t appleEnd = s.find("and", appleStart);
        int numApples = stoi(s.substr(appleStart, appleEnd - appleStart).substr(0, s.find(' ') - 1));
        n -= numApples;
    }

    // Count the number of oranges
    size_t orangeStart = s.find("oranges");
    if (orangeStart != string::npos) {
        size_t orangeEnd = s.find("and", orangeStart);
        int numOranges = stoi(s.substr(orangeStart, orangeEnd - orangeStart).substr(0, s.find(' ') - 1));
        n -= numOranges;
    }

    return n;
}