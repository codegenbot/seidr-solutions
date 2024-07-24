int y = 0;
ss >> month >> ch >> day >> ch >> year;

if (month.length() != 2 || day.length() != 2 || year.length() > 4)
    return false;

int m = stoi(month), d = stoi(day);
y =stoi(year);

// rest of the code remains the same