int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string str = s;
    int apples = 0, oranges = 0;
    
    while ((pos = str.find("apples", pos)) != string::npos) {
        if (str.find("and", pos) == string::npos || str.find("and", pos + 7) == string::npos)
            break;
        int start = pos;
        while (str[start] >= '0' && str[start] <= '9')
            start++;
        apples = stoi(str.substr(start - 1, pos - start));
        if (str.find("apples", pos) != string::npos && str.find("and", pos) == string::npos)
            break;
    }
    
    pos = 0;
    while ((pos = str.find("oranges", pos)) != string::npos) {
        if (str.find("and", pos) == string::npos || str.find("and", pos + 7) == string::npos)
            break;
        int start = pos;
        while (str[start] >= '0' && str[start] <= '9')
            start++;
        oranges = stoi(str.substr(start - 1, pos - start));
        if (str.find("oranges", pos) != string::npos && str.find("and", pos) == string::npos)
            break;
    }
    
    return n - apples - oranges;
}