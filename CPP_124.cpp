int daysInMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(date.size() != 10) return false;
    if(date[2] != '-' || date[5] != '-') return false;
    int month = stoi(date.substr(0,2));
    int day = stoi(date.substr(3,2));
    int year = stoi(date.substr(6,4));
    if(month < 1 || month > 12) return false;
    if(day < 1 || day > daysInMonth[month]) return false;
    if(month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))) {
        if(day > 29) return false;
    }
    return true;
}