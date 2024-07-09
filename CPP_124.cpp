// Check if the date string is not empty
    if(date.empty()){
        return false;
    } 
    
    // Check the format of the date string
    if(date.size() < 10 || date[2] != '-' || date[5] != '-'){
        return false;
    }

    int month = stoi(date.substr(0, 2));
    int day = stoi(date.substr(3, 2));
    int year = stoi(date.substr(6, 4));

    // Validate the month
    if(month < 1 || month > 12){
        return false;
    }

    // Validate the day based on month
    if(day < 1 || day > 31){
        return false;
    } 

    if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30){
        return false;
    } 

    if(month == 2){
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            if(day > 29){
                return false;
            }
        } else {
            if(day > 28){
                return false;
            }
        }
    }

    return true;
}