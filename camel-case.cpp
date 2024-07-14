Here is the solution:

string camelCase(string s) {
    string result = "";
    size_t pos = 0;
    
    while (pos < s.size()) {
        if (s[pos] == '-') {
            pos++;
            continue;
        }
        
        size_t nextSpace = s.find(' ', pos);
        if (nextSpace == string::npos)
            nextSpace = s.size();
        
        string word = s.substr(pos, nextSpace - pos);
        if (!result.empty())
            result += char toupper(word[0]);
        else
            result += word;
        pos = nextSpace + 1;
    }
    
    return result;
}