bool valid_date(string date){
    if(date.empty())
        return false;
    
    int month, day, year;
    sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year);
    
    if(month < 1 || month > 12)
        return false;
    
    if(day < 1 || day > 31)
        return false;
    
    if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;
    
    if(month == 2){
        bool leapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if(leapYear && day > 29)
            return false;
        if(!leapYear && day > 28)
            return false;
    }
    
    return true;
}