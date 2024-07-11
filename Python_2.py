```
def check(number):
    result = format(round(number, 2), '.2f')
    if float(result) >= 10:
        print("The number is greater than or equal to 10.")
    elif float(result) < 5:
        print("The number is less than 5.")
    else:
        print("The number is between 5 and 10.")