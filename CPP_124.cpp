bool valid_date(const string& date) {
    if(date.empty() || date.size() != 10 || date[2] != '-' || date[5] != '-')
        return false;
    
    int day = stoi(date.substr(3, 2));
    int month = stoi(date.substr(0, 2));
    
    if(month < 1 || month > 12)
        return false;
    
    if ((month == 2 && (day < 1 || day > 29)) ||
        ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) ||
        (day < 1 || day > 31))
        return false;
    
    return true;
}