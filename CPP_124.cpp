bool valid_date(string date){
    if (date.length() == 10 && date[2] == '-' && date[5] == '-') {
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));
        int year = stoi(date.substr(6, 4));

        if (month >= 1 && month <= 12) {
            if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day >= 1 && day <= 31)) {
                return true;
            } else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day >= 1 && day <= 30)) {
                return true;
            } else if (month == 2) {
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { // Leap year check
                    return (day >= 1 && day <= 29) ? true : false;
                } else {
                    return (day >= 1 && day <= 28) ? true : false;
                }
            }
        }
    }
    return false;
}