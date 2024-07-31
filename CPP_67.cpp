int total_fruits = n;
    int apples = stoi(s.substr(0, s.find(" apples")));
    int oranges = stoi(s.substr(s.find("apples") + 7, s.find(" oranges")));
    
    return total_fruits - apples - oranges;
}