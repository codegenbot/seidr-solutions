import statistics


def check(rounded_avg):
    if str(rounded_avg).endswith("0") or str(rounded_avg).endswith("5"):
        print(f"{rounded_avg} is an odd number.")
    else:
        print(f"{rounded_avg} is an even number.")


def average_rounded():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            if n > m:
                return -1
            avg = (n + m) / 2
            rounded_avg = str(int(avg))
            check(rounded_avg)
        except ValueError:
            print("Invalid input. Please enter integers.")