int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    int index = 0;
    
    // Count the number of apples
    index = s.find("apples");
    if (index != string::npos) {
        apples = stoi(s.substr(0, index));
    }
    
    // Count the number of oranges
    index = s.find("oranges");
    if (index != string::npos) {
        oranges = stoi(s.substr(index + 8));
    }
    
    // Calculate the number of mango fruits
    int mangoes = n - apples - oranges;
    
    return mangoes;
}