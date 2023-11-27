bool valid_date(string date){
    if (date.empty()) {
        return false;
    }
    
    string delimiter = "-";
    size_t pos = 0;
    string token;
    int count = 0;
    
    while ((pos = date.find(delimiter)) != string::npos) {
        token = date.substr(0, pos);
        if (count == 0) {
            int month = stoi(token);
            if (month < 1 || month > 12) {
                return false;
            }
        } else if (count == 1) {
            int day = stoi(token);
            int month = stoi(date.substr(0, 2));
            if (day < 1 || day > 31) {
                if (month == 4 || month == 6 || month == 9 || month == 11) {
                    return false;
                } else if (month == 2) {
                    return false;
                }
            }
        }
        date.erase(0, pos + delimiter.length());
        count++;
    }
    
    int year = stoi(date);
    if (year < 1) {
        return false;
    }
    
    return true;
}