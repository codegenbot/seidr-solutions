std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    std::string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    result.push_back(temp);
    std::string rev = temp;
    std::reverse(rev.begin(), rev.end());
    if (!s.empty() && !c.empty()) { 
        temp = temp; 
        std::reverse(temp.begin(), temp.end()); 
        result.push_back((temp == s) ? "True" : "False"); 
    } else {
        result.push_back("Invalid input"); 
    }
    return result;
}