import math


def rounded_avg():
    while True:
        calc_avg = input("Do you want to calculate average (yes/no)? ")
        if calc_avg.lower() == "yes":
            break
        elif calc_avg.lower() == "no":
            return "Average will not be calculated."
        else:
            print("Invalid input. Please enter yes or no.")

    n = None
    while n is None:
        try:
            n = float(input("Enter first number: "))
        except ValueError:
            print("Invalid input. Please enter a number.")

    m = None
    while m is None:
        try:
            m = float(input("Enter second number: "))
        except ValueError:
            print("Invalid input. Please enter a number.")

    return str(math.ceil((n + m) / 2))


print(rounded_avg())