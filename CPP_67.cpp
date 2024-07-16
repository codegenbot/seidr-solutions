int totalFruits = n;
    int apples = 0, oranges = 0, mangoes = 0;
    
    size_t pos = s.find("apples");
    if (pos != string::npos) {
        apples = stoi(s.substr(0, pos));
    }
    
    pos = s.find("oranges");
    if (pos != string::npos) {
        oranges = stoi(s.substr(s.find("apples") + 8, pos - s.find("apples") - 9));
    }
    
    mangoes = totalFruits - apples - oranges;
    
    return mangoes;
}