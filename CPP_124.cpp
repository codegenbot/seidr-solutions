int month, year;
string token[3];

istringstream iss(date);
for (int i = 0; i < 3; ++i) {
    getline(iss, token[i], '-');
}

month = stoi(token[0]);
day = stoi(token[1]);
year = stoi(token[2]);

if (month < 1 || month > 12)
    return false;

if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
    return false;
else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    return false;
else if (month == 2) {
    if (year % 4 != 0)
        return day > 28 ? false : true;
    else if (year % 100 != 0)
        return day > 29 ? false : true;
    else if (year % 400 != 0)
        return day > 28 ? false : true;
    return true;
}

if ((day < 1) || (day > 31))
    return false;

return true;