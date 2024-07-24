try:
    n = int(input("Enter a positive number to factorize: "))
    if n <= 0:
        print("Please enter a positive integer.")
    else:
        factors = []
        for i in range(1, n+1):
            if n % i == 0:
                factors.append(i)
        print(factors)
except ValueError:
    print("Invalid input. Please enter a valid integer.")