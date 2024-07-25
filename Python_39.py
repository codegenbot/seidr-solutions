try:
    n = int(input("Enter a number: "))
    if n < 0:
        print('Invalid input. Please enter a non-negative integer.')
    else:
        result = prime_fib(n)
        print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")