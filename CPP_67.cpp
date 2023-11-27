int fruit_distribution(string s, int n){
    int apples = 0;
    int oranges = 0;
    
    // Parsing the string to extract the number of apples and oranges
    size_t applePos = s.find("apples");
    if(applePos != string::npos){
        size_t spacePos = s.rfind(" ", applePos);
        apples = stoi(s.substr(spacePos+1, applePos-spacePos-1));
    }
    
    size_t orangePos = s.find("oranges");
    if(orangePos != string::npos){
        size_t spacePos = s.rfind(" ", orangePos);
        oranges = stoi(s.substr(spacePos+1, orangePos-spacePos-1));
    }
    
    // Calculating the number of mango fruits
    int mangoes = n - apples - oranges;
    
    return mangoes;
}