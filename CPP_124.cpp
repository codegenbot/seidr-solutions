bool valid_date(string date){
    if(date.empty())
        return false;

    string month = date.substr(0, 2);
    string day = date.substr(3, 2);
    string year = date.substr(6, 4);

    if(month.empty() || day.empty() || year.empty())
        return false;

    int monthVal = stoi(month);
    int dayVal = stoi(day);
    int yearVal = stoi(year);

    if(monthVal < 1 || monthVal > 12)
        return false;

    if((monthVal == 1 || monthVal == 3 || monthVal == 5 || monthVal == 7 ||
        monthVal == 8 || monthVal == 10 || monthVal == 12)
        && (dayVal < 1 || dayVal > 31))
        return false;

    if((monthVal == 4 || monthVal == 6 || monthVal == 9 || monthVal == 11)
        && (dayVal < 1 || dayVal > 30))
        return false;

    // Check for leap year
    if(monthVal == 2){
        bool isLeapYear = (yearVal % 4 == 0 && yearVal % 100 != 0) || (yearVal % 400 == 0);
        if(!isLeapYear && (dayVal < 1 || dayVal > 28))
            return false;
        if(isLeapYear && (dayVal < 1 || dayVal > 29))
            return false;
    }

    return true;
}