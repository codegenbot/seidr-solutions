try:
    n = input("Enter a number: ")
    if not n.isdigit():
        print("Number should be an integer.")
    else:
        n = int(n)
        if n <= 0:
            print("Number should be greater than 0.")
        else:
            if is_prime(n):
                print(f"{n} is a prime number.")
            else:
                print(f"{n} is not a prime number.")
except ValueError:
    print("Invalid input. Please enter a valid integer.")