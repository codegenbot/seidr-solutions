import math

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

def rounded_avg(n, m):
    avg = (n + m) / 2
    return str(math.ceil(avg))

print(rounded_avg(n, m))