def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True


try:
    n = int(input("Enter a number: "))
    if not isinstance(n, int):
        print("Number should be an integer.")
    elif n <= 0:
        print("Number should be greater than 0.")
    else:
        if is_prime(n):
            print(f"{n} is a prime number.")
        else:
            print(f"{n} is not a prime number.")
except ValueError:
    print("Invalid input. Please enter a valid integer.")