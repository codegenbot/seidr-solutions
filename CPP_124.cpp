bool valid_date(string date) {
    if(date.empty())
        return false;
    
    if(date.size() != 10)
        return false;
    
    if(date[2] != '-' || date[5] != '-')
        return false;
    
    int day = stoi(date.substr(3, 2));
    int month = stoi(date.substr(0, 2));
    int year = stoi(date.substr(6, 4));
    
    if(month < 1 || month > 12)
        return false;
    
    if(month == 2){
        if(day < 1 || day > 29)
            return false;
    } else if(month == 4 || month == 6 || month == 9 || month == 11){
        if(day < 1 || day > 30)
            return false;
    } else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        if(day < 1 || day > 31)
            return false;
    }
    
    return true;
}

int main() {
    string date;
    cin >> date;
    
    if(valid_date(date))
        cout << "Valid date" << endl;
    else
        cout << "Invalid date" << endl;
    
    return 0;
}