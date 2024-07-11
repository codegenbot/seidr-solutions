int fruit_distribution(string s, int n) {
    int total_apples = 0;
    int total_oranges = 0;
    
    string temp = "";
    for (char c : s) {
        if (c == ' ') {
            if (!temp.empty()) {
                size_t pos = temp.find("apples");
                if (pos != string::npos) {
                    total_apples = stoi(temp.substr(0, pos).erase(0, 1));
                } else {
                    pos = temp.find("oranges");
                    if (pos != string::npos)
                        total_oranges = stoi(temp.substr(0, pos).erase(0, 1));
                }
                temp.clear();
            }
        } else {
            temp += c;
        }
    }
    
    return n - total_apples - total_oranges;