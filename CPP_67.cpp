int fruit_distribution(string s, int n) {
    int total_apples = 0;
    int total_oranges = 0;
    
    string temp = "";
    for (char c : s) {
        if (c == ' ') {
            if (!temp.empty()) {
                if (temp.find("apples") != string::npos)
                    total_apples = stoi(temp.substr(0, temp.find(" ")).erase(0, 1));
                else if (temp.find("oranges") != string::npos)
                    total_oranges = stoi(temp.substr(0, temp.find(" ")).erase(0, 1));
                temp.clear();
            }
        } else {
            temp += c;
        }
    }
    
    // Process the last string
    if (!temp.empty()) {
        if (temp.find("apples") != string::npos)
            total_apples = stoi(temp.substr(0, temp.find(" ")).erase(0, 1));
        else if (temp.find("oranges") != string::npos)
            total_oranges = stoi(temp.substr(0, temp.find(" ")).erase(0, 1));
    }
    
    return n - total_apples - total_oranges;