int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    string tempStr = str; 
    while ((pos = tempStr.find(substring)) != string::npos) {
        count++;
        tempStr.erase(pos, substring.length());
    }
    return count;
}