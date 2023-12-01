int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    
    // Find the number of apples and oranges in the string
    size_t applePos = s.find("apples");
    if (applePos != string::npos) {
        size_t spacePos = s.rfind(' ', applePos);
        apples = stoi(s.substr(spacePos, applePos - spacePos));
    }
    
    size_t orangePos = s.find("oranges");
    if (orangePos != string::npos) {
        size_t spacePos = s.rfind(' ', orangePos);
        oranges = stoi(s.substr(spacePos, orangePos - spacePos));
    }
    
    // Calculate the number of mango fruits
    int mangoes = n - apples - oranges;
    
    return mangoes;
}