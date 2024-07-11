if(date.empty()) {
        return false;
    }

    int day, month, year;
    if(sscanf(date.c_str(), "%d-%d-%d", &month, &day, &year) != 3) {
        return false;
    }

    if(month < 1 || month > 12) {
        return false;
    }

    bool leapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

    if((day < 1 || day > 31) || (month == 4 || month == 6 || month == 9 || month == 11) && day > 30 ||
       (month == 2 && (!leapYear && day > 28) || (leapYear && day > 29))) {
        return false;
    }

    return true;
}