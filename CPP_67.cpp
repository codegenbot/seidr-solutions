int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    int start = 0;
    int end = 0;
    
    // Find the number of apples
    start = s.find("apples");
    if (start != string::npos) {
        end = s.find(" ", start);
        apples = stoi(s.substr(start, end - start));
    }
    
    // Find the number of oranges
    start = s.find("oranges");
    if (start != string::npos) {
        end = s.find(" ", start);
        oranges = stoi(s.substr(start, end - start));
    }
    
    // Calculate the number of mango fruits
    int mangoes = n - apples - oranges;
    
    return mangoes;
}