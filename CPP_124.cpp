bool valid_date(string date) {
    size_t pos = 0;
    string month, day, year;

    // Extract month and day from the input string
    for (int i = 0; i < 2; ++i) {
        if ((pos = date.find('-')) == string::npos)
            return false;
        month = date.substr(0, pos);
        date.erase(0, pos + 1);

        if ((pos = date.find('-')) == string::npos)
            day = date;
        else {
            day = date.substr(0, pos);
            date.erase(0, pos + 1);
        }
    }

    year = date;

    // Check for valid month
    int m = stoi(month);
    if (m < 1 || m > 12)
        return false;

    // Check for valid day
    int d = stoi(day);
    if ((m == 2 && d > 29) ||
        (m == 4 || m == 6 || m == 9 || m == 11) &&
            (d < 1 || d > 30))
        return false;

    // Check for valid day for months with 31 days
    if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) &&
            (d < 1 || d > 31))
        return false;

    return true;
}