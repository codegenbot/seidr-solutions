int fruit_distribution(string s, int n){
    int apples = 0;
    int oranges = 0;
    
    // Find the number of apples and oranges in the string
    size_t pos = s.find("apples");
    if (pos != string::npos) {
        string num = s.substr(0, pos);
        apples = stoi(num);
    }
    
    pos = s.find("oranges");
    if (pos != string::npos) {
        string num = s.substr(0, pos);
        oranges = stoi(num);
    }
    
    // Calculate the number of mango fruits
    int mangoes = n - apples - oranges;
    
    return mangoes;
}