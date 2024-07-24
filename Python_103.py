```python
import statistics

def check(rounded_avg):
    if int(rounded_avg, 2) % 2 != 0:
        print(f"{rounded_avg} is an odd number.")
    else:
        print(f"{rounded Avg} is an even number.")

def average_rounded():
    while True:
        try:
            n = int(input("Enter first number: "))
            m = int(input("Enter second number: "))
            if n > m:
                return -1
            avg = round((n + m) / 2)
            rounded_avg = bin(avg)[2:]
            check(rounded_avg)
        except ValueError:
            print("Invalid input. Please enter integers.")