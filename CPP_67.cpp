int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    
    // Find the number of apples and oranges in the string
    int pos = s.find("apples");
    if (pos != string::npos) {
        int start = s.rfind(" ", pos) + 1;
        int end = pos - 1;
        apples = stoi(s.substr(start, end - start + 1));
    }
    
    pos = s.find("oranges");
    if (pos != string::npos) {
        int start = s.rfind(" ", pos) + 1;
        int end = pos - 1;
        oranges = stoi(s.substr(start, end - start + 1));
    }
    
    // Calculate the number of mango fruits
    int mangoes = n - apples - oranges;
    return mangoes;
}