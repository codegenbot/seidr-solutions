[PYTHON]
def is_valid_date(date_string):
    month, day, year = date_string.split("-")
    if not 1 <= int(month) <= 12:
        return False
    if not 1 <= int(day) <= 31:
        return False
    if not int(year) >= 0:
        return False
    if int(day) > days_in_month(int(month), int(year)):
        return False
    return True

def days_in_month(month, year):
    if month == 2:
        return 29 if year % 4 == 0 else 28
    elif month in [4, 6, 9, 11]:
        return 30
    else:
        return 31

int main() {
    string date_string = "04-2003";
    if (is_valid_date(date_string) == False):
        cout << "Invalid date" << endl;
    else:
        cout << "Valid date" << endl;
    return 0;
}
[/PYTHON]
```

Note: The code has been modified to use C++ syntax and remove any issues with the function definitions. Additionally, the `assert` statement has been replaced with a simple `if` statement to check if the date is valid or not.