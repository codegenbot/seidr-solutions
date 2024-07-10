try:
    n = int(input("Enter a number: "))
except ValueError:
    print("Invalid input. Please enter a valid integer.")
else:
    if n <= 0:
        print("Number should be greater than 0.")
    else:
        if is_prime(n):
            print(f"{n} is a prime number.")
        else:
            print(f"{n} is not a prime number.")