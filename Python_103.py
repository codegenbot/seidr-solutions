```
def average_rounded():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            if n > m:
                print("Invalid input. The first number must be less than or equal to the second.")
                continue
            avg = round((n + m) / 2)
            rounded_avg = str(bin(avg)[2:])
            check(rounded_avg)
        except ValueError:
            print("Invalid input. Please enter integers.")