vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    
    int mercury = 57.9, venus = 67.2, earth = 0, mars = 225, 
        jupiter = 778, saturn = 1433, uranus = 2870, neptune = 4495;

    if (planet1 == planet2) {
        result.push_back("The two planets are the same.");
    } else {
        result.push_back("The two planets are different.");
    }

    return result;
}