```
def valid_date(date):
    day, month, year = map(int, date.split('-'))
    if len(str(day)) == 1:
        day = '0' + str(day)
    if len(str(month)) == 1:
        month = '0' + str(month)
    if int(month) < 1 or int(month) > 12:
        return False
    if (int(month) in [1,3,5,7,8,10,12] and int(day) < 1 or int(day) > 31) or \
       (int(month) in [4,6,9,11] and int(day) < 1 or int(day) > 30) or \
       (int(month) == 2 and int(day) < 1 or int(day) > 29):
        return False
    if year < 0:
        return False
    return True

if __name__ == "__main__":
    date = input("Enter a date (YYYY-MM-DD): ")
    if valid_date(map(int, date.split('-'))):
        print("The date is valid.")
    else:
        print("The date is not valid.")