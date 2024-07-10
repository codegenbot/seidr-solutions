import math

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

try:
    n = int(input("Enter a number: "))
    if n <= 0:
        print("Number should be greater than 0.")
    elif not isinstance(n, int):
        print("Number should be an integer.")
    else:
        if is_prime(n):
            print(f"{n} is a prime number.")
        else:
            print(f"{n} is not a prime number.")
except ValueError:
    print("Invalid input. Please enter a valid integer.")