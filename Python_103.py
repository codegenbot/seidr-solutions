```
import statistics


def check(rounded_avg):
    if int(rounded_avg) % 2 == 0:
        print("The average is even.")
    else:
        print("The average is odd.")


def average_rounded():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            if n > m:
                return -1
            avg = round((n + m) / 2)
            rounded_avg = str(avg)
            check(rounded_avg)
        except ValueError:
            print("Invalid input. Please enter integers.")