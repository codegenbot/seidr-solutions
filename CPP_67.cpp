int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    int start = 0;
    int end = s.find(" ", start);
    
    while (end != string::npos) {
        string fruit = s.substr(start, end - start);
        if (fruit == "apples") {
            start = end + 1;
            end = s.find(" ", start);
            apples = stoi(s.substr(start, end - start));
        } else if (fruit == "oranges") {
            start = end + 1;
            end = s.find(" ", start);
            oranges = stoi(s.substr(start, end - start));
        }
        start = end + 1;
        end = s.find(" ", start);
    }
    
    return n - apples - oranges;
}